#ifndef PMERGEME_HPP
# define PMERGEME_HPP

# include <iostream>
# include <vector>
# include <deque>
# include <utility>
# include <cstdlib>

std::vector<int> vectorRFJ(std::vector<int> initial_list);
std::vector<std::pair<std::vector<int>, std::vector<int> > > recursive_pairs(std::vector<std::pair<std::vector<int>, std::vector<int> > > pair_vector, size_t pair_size, size_t initial_size);
int parsing(char **argv);
int rec_how_many(int &count, int n);
int how_many(int n);

#endif
