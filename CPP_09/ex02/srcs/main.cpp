#include "../include/PMergeMe.hpp"

int main(int argc, char **argv)
{
	argv[0] = NULL;
	if (argc < 2) {
		std::cout << "[-] Usage: ./PMergeMe <number sequence (space seperated)>" << std::endl;
		return (-1);
	}
	if (parsing(argv) == -1) {
		std::cout << "[-] An error has occured while parsing input. Please check you number sequence." << std::endl;
	}

	int i = 0;
	std::vector<int> initial_list;
	while (argv[++i])
		initial_list.push_back(atoi(argv[i]));

	vectorRFJ(initial_list);
}
