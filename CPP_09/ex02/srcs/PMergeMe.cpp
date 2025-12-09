#include "../include/PMergeMe.hpp"

void print_vector(std::vector<std::pair<std::vector<int>, std::vector<int> > > pair_vector)
{
	std::cout << "Number of pairs: " << pair_vector.size() << std::endl;
	for (size_t i = 0; i < pair_vector.size(); i++)
	{
		std::cout << "Pair n" << i << ": ";
		for (size_t j = 0; j < pair_vector[i].first.size(); j++)
			std::cout << pair_vector[i].first[j] << " ";
		std::cout << " / ";
		for (size_t j = 0; j < pair_vector[i].second.size(); j++)
			std::cout << pair_vector[i].second[j] << " ";
		std::cout << std::endl;
	}
}

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

std::vector<int> vectorRFJ(std::vector<int> initial_list)
{
	std::vector<std::pair<std::vector<int>, std::vector<int> > > pair_vector;
	for (size_t i = 0; i < initial_list.size(); i += 2)
	{
		std::vector<int> v1;
		std::vector<int> v2;
		v1.push_back(initial_list[i]);
		v2.push_back(initial_list[i + 1]);
		std::pair<std::vector<int>, std::vector<int> > new_pair(v1, v2);
		pair_vector.push_back(new_pair);
	}
	print_vector(pair_vector);
	return (initial_list);
}

// std::vector<std::pair<std::vector<int>, std::vector<int> > > recursive_pairs(std::vector<std::pair<std::vector<int>, std::vector<int> > > pair_vector, size_t pair_size, size_t initial_size)
// {
// 	std::vector<std::pair<std::vector<int>, std::vector<int> > > new_pair_vector;
// 	if (pair_size * 2 > initial_size)
// 		return (pair_vector); // Can't make bigger pairs
// 	else
// 	{
// 		size_t i = 0;
// 		while (i < initial_size / 2)
// 		{
// 			std::vector<int> v1;
// 			std::vector<int> v2;
// 			for (size_t j = 0; j < pair_vector[i].first.size(); j++)
// 				v1.push_back(pair_vector[i].first[j]);
// 			for (size_t j = 0; j < pair_vector[i].second.size(); j++)
// 				v1.push_back(pair_vector[i].second[j]);
// 			for (size_t j = 0; j < pair_vector[i + 1].first.size(); j++)
// 				v2.push_back(pair_vector[i + 1].first[j]);
// 			for (size_t j = 0; j < pair_vector[i + 1].second.size(); j++)
// 				v2.push_back(pair_vector[i + 1].second[j]);
// 			std::pair<std::vector<int>, std::vector<int> > new_pair(v1, v2);
// 			new_pair_vector.push_back(new_pair);
// 			i+= 2;
// 		}
// 		std::cout << "Pair Size: " << new_pair_vector.size() << std::endl;
// 		print_vector(new_pair_vector);
// 		recursive_pairs(new_pair_vector, new_pair_vector.size(), initial_size);
// 	}
// 	return (pair_vector);
// }
