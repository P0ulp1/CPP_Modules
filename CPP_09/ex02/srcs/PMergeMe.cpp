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
	for (size_t i = 0; i < temp.size(); i++)
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
