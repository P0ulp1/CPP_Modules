#include "../include/PMergeMe.hpp"

int parsing(char **argv)
{
	int i = 0;
	while (argv[++i]) {
		int j = -1;
		while (argv[i][++j]) {
			if (!isdigit(argv[i][j]))
			return (-1);
		}
	}
	return (0);
}

int count_elem(char **argv)
{
	int i = 1;
	while (argv[i])
		i++;
	return (i - 1);
}

int rec_how_many(int &count, int n)
{
	if (n / 2 >= 2)
	{
		count++;
		rec_how_many(count, n / 2);
	}
	return (count);
}

int how_many(int n)
{
	if (n % 2 != 0)
		n--;
	int count = 0;
	rec_how_many(count, n);
	return (count);
}

void print_vec(std::vector<int> vec)
{
	for (size_t i = 0; i < vec.size(); i++)
		std::cout << "[" << i << "] " << vec[i] << std::endl;
	std::cout << std::endl << std::endl;
}

void push_front(std::vector<int> &vec, int elem)
{
	vec.resize(vec.size() + 1, 0);
	std::vector<int> temp = vec;
	vec[0] = elem;
	for (size_t i = 0; i < temp.size() - 1; i++)
		vec[i + 1] = temp[i];
}

void addPend(std::vector<int> &main, std::vector<int> &pend, int depth)
{
	if (depth == 1)
	{
		if (main.size() % 2 == 0)
			return;
		// main.pop_back();
		// pend.push_back(main[main.size() - 1]);
		push_front(pend, main[main.size() - 1]);
		main.pop_back();
	}
	else
	{
		size_t n_pend = main.size() % static_cast<int>(pow(2, depth));
		size_t i = main.size() - 1;
		while (n_pend)
		{
			// pend.push_back(main[i]);
			// main.pop_back();
			push_front(pend, main[i]);
			main.pop_back();
			n_pend--;
			i--;
		}
	}
}

void swap(std::vector<int> &main, int pos, int pack_size)
{
	// pack_size = combien d'elements doivent etre swape
	// pos = position du dernier elem du paquet a swapper
	int tmp;
	size_t stop = pack_size;

	while (stop)
	{
		tmp = main[pos];
		main[pos] = main[pos + pack_size];
		main[pos + pack_size] = tmp;
		stop--;
		pos--;
	}
}

void permutations(std::vector<int> &main, int depth)
{
	//Check si permutation, swap le fait

	// la depth permet de connaitre :
	// 	-1) la taille du paquet (pack_size)
	// 	-2) l'indice d'elements a comparer


	// depth == 1 : pack_size == 1, elem0 vs elem1 --> 1er elem vs 2eme elem
	// depth == 2 : pack_size == 2, elem1 vs elem3 --> 2eme elem vs 4eme elem
	// depth == 3 : pack_size == 4, elem3 vs elem7 --> 4eme elem vs 8eme elem
	// depth == 4 : pack_size == 8, elem7 vs elem15 --> 8eme elem vs 16eme elem
	// 2^depth  == pack_size

	int pack_size = pow(2, depth - 1);

	for (size_t i = pack_size - 1; i < main.size(); i += (pack_size * 2))
	{
		if (main[i] > main[i + pack_size])
		{
			swap(main, i, pack_size);
		}
	}
}

void recursive(std::vector<int> &main, std::vector<int> &pend, int depth, int max_depth)
{
	if (depth == max_depth + 1)
	{
		std::cout << "Going out of recursion" << std::endl;
		return ;
	}
	std::cout << std::endl;
	addPend(main, pend, depth);
	permutations(main, depth);
	std::cout << "RECUR/Depth: " << depth << std::endl;
	print_vec(main);
	std::cout << "Pend: " << std::endl;
	print_vec(pend);
	recursive(main, pend, depth + 1, max_depth);
}

// Genere les elements de la suite de jacobsthal inferieurs a N
//  N = pend.size() + 1
std::vector<int> jacobSeq(int N)
{
	std::vector<int> sequence;
	for (int i = 0; i < N; ++i)
	{
		// Calcul de 2^i
		long power = 1L << i; // plus rapide que pow(2, i)
		// Calcul de (-1)^i
		int sign = (i % 2 == 0) ? 1 : -1;
		// Formule : (2^i - (-1)^i) / 3
		int value = static_cast<int>((power - sign) / 3);
		if (value >= N) break;
		sequence.push_back(value);
	}
	return (sequence);
}

// Insert pend into main using binary-insertion
// Insertion order is dictated by the jacobsthal sequence
