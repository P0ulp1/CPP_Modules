#include "../include/PMergeMe.hpp"

int main(int argc, char **argv)
{
	if (argc < 2) {
		std::cout << "[-] Usage: ./PMergeMe <number sequence (space seperated)>" << std::endl;
		return (-1);
	}
	if (parsing(argv) == -1) {
		std::cout << "[-] An error has occured while parsing input. Please check you number sequence." << std::endl;
	}

	std::vector<int> main;
	std::vector<int> pend;
	int max_depth = how_many(count_elem(argv)) + 1;
	int i = 0;
	while (argv[++i])
		main.push_back(atoi(argv[i]));

	std::cout << "RECUR/Depth: 0" << std::endl;
	print_vec(main);
	recursive(main, pend, 1, max_depth);

	return (0);
}

void simple_swap(std::vector<int> &main, int pos, int pack_size)
{
	int i = 0;
	int temp;
	while (i < pack_size)
	{
		temp = main[pos];
		main[pos] = main[pos + pack_size];
		main[pos + pack_size] = temp;
		i++;
	}
}

void hard_swap(std::vector<int> &main, int pos, int pack_size)
{
	int i = 0;
	int temp;
	while (i < pack_size)
	{
		temp = main[i];
		main[i] = main[i + pos];
		main[i + pos] = temp;
		i++;
	}
}

void	swap(std::vector<int> &main, int idx1, int idx2)
{
	int temp;
	temp = main[idx1];
	main[idx1] = main[idx2];
	main[idx2] = temp;
}

void permutations(std::vector<int> &main, int depth)
{
	if (depth == 1)
	{
		for (size_t i = 0; i < main.size(); i += 2)
		{
			if (main[i] > main[i + 1])
				simple_swap(main, i, 1);
		}
		return;
	}
	size_t pack_size = pow(2, depth - 1);
	size_t pos = pack_size;
	//AFFICHER NOMBRES COMPARES A CHAQUE DEPTH

	// while (pos + pack_size - 1 < main.size())
	// {
	// 	if (main[pos - 1] > main[pos + pack_size - 1])
	// 		hard_swap(main, pos, depth);
	// 	pos *= 2;
	// }
}

void recursive(std::vector<int> &main, std::vector<int> &pend, int depth, int max_depth)
{
	if (depth == max_depth + 1)
		return ;
	std::cout << std::endl;
	addPend(main, pend, max_depth);
	permutations(main, depth);
	std::cout << "RECUR/Depth: " << depth << std::endl;
	print_vec(main);
	recursive(main, pend, depth + 1, max_depth);
}
