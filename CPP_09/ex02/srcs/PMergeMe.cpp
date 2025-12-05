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

std::vector<int> vectorRFJ(std::vector<int> initial_list)
{
	std::vector<std::pair<std::vector<int>, std::vector<int> > > pair_list;
	for (size_t i = 0; i < initial_list.size(); i += 2)
	{
		std::vector<int> v1;
		std::vector<int> v2;
		v1.push_back(initial_list[i]);
		std::cout << v1[0] << std::endl;
		v2.push_back(initial_list[i + 1]);
		std::pair<std::vector<int>, std::vector<int> > new_pair(v1, v2);
		pair_list.push_back(new_pair);
	}
	// for (size_t i = 0; i < pair_list.size(); i++)
	// {
	// 	std::cout << "[" << i << "] " << pair_list[i].first[0] << " " << pair_list[i].second[0] << std::endl;
	// }
	// recursive_pairs(pair_list, pair_list.size(), initial_list.size());
	return (initial_list);
}

std::vector<std::pair<std::vector<int>, std::vector<int> > > recursive_pairs(std::vector<std::pair<std::vector<int>, std::vector<int> > > pair_vector, size_t pair_size, size_t initial_size)
{
	if (pair_size * 2 > initial_size)
		return (pair_vector); // Can't make bigger pairs
	else
	{
		size_t i = 0;
		while (i < initial_size)
		{
			std::vector<int> first_vec = pair_vector[i].first;
			std::vector<int> second_vec = pair_vector[i].second;
			std::pair<std::vector<int>, std::vector<int> > new_pair(first_vec, second_vec);
			pair_vector.push_back(new_pair);
			pair_vector.erase(pair_vector.begin() + i);
		}
		for (size_t i = 0; i < pair_vector.size(); i++)
		{
			for (size_t j = 0; j < pair_size; j++)
			{
				std::cout << "[" << i << "] " << pair_vector[i].first[j] << " " << pair_vector[i].second[j] << std::endl;

			}
		}
	}
	return (pair_vector);
}
