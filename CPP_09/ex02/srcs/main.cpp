#include "../include/PMergeMe.hpp"

int main(int argc, char **argv)
{
	if (argc < 3) {
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

	// std::cout << "RECUR/Depth: 0" << std::endl;
	// print_vec(main);
	recursive(main, pend, 1, max_depth);

	// std::vector<int> jacob = jacobSeq(11);
	// print_vec(jacob);

	return (0);
}

// Quand on arrive au cas ou on peut plus faire de pair on incorpore b1 et les a's dans main,
// et les b's dans pend. Je construis les a's et les b's en creeant des paquets de la taille "pack_size" en depth - 1

// je compare les b's de pend avec les pack de la surface de recherche : b3, se compare a b1, a1, et a2

//Generer une suite de Jacobstahl sans prendre les 0 et 1 du debut (3 5 11)

// Premier chiffre suite J = 3
// --> On commence par inserer b3 dans le main
// --> b3 est lie a a3, donc surface de recherche: {b1, a1, a2, a3}
// --> 4 comparaisons max
// --> On insere ensuite b2 dans le main
// -> Comme b1, b2, b3 sont dans le main, on prend le prochain nombre de la suite J (5)
// --> On reprend donc les insertions en commencent par b5, puis on fera b4


