#ifndef PMERGEME_HPP
# define PMERGEME_HPP

# include <iostream>
# include <vector>
# include <deque>
# include <utility>
# include <cstdlib>
# include <cmath>

std::vector<int> vectorRFJ(std::vector<int> initial_list);
std::vector<std::pair<std::vector<int>, std::vector<int> > > recursive_pairs(std::vector<std::pair<std::vector<int>, std::vector<int> > > pair_vector, size_t pair_size, size_t initial_size);
int parsing(char **argv);
int count_elem(char **argv);
int rec_how_many(int &count, int n);
int how_many(int n);
void push_front(std::vector<int> &vec, int elem);
void addPend(std::vector<int> &list, std::vector<int> &pend, int depth);
void print_vec(std::vector<int> vec);
void recursive(std::vector<int> &main, std::vector<int> &pend, int depth, int max_depth);
void simple_swap(std::vector<int> &main, int pos, int pack_size);
void hard_swap(std::vector<int> &main, int pos, int pack_size);

#endif
