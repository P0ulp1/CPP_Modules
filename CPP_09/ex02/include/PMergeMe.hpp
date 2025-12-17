#ifndef PMERGEME_HPP
# define PMERGEME_HPP

# include <iostream>
# include <vector>
# include <deque>
# include <utility>
# include <cstdlib>
# include <cmath>

class elem
{
	private:
		char _letter;
		int _label;
		std::vector<int> _value;

	public:
		elem(char letter, int label, std::vector<int> value);
		~elem();

		char getLetter() { return _letter; }
		int getLabel() { return _label; }
		std::vector<int> getValue() { return _value; }
};

int parsing(char **argv);
int count_elem(char **argv);
int rec_how_many(int &count, int n);
int how_many(int n);
void push_front(std::vector<int> &vec, int elem);
void addPend(std::vector<int> &list, std::vector<int> &pend, int depth);
void print_vec(std::vector<int> vec);
void recursive(std::vector<int> &main, std::vector<int> &pend, int depth, int max_depth);
void swap(std::vector<int> &main, int pos, int pack_size);
void push_everything_to_main(std::vector<int> &main, std::vector<int> &pend);
void push_to(std::vector<int> &main, std::vector<elem> &dest, int idx, int pack_size, int elems);
void insertion(std::vector<int> main, int depth);
void insertion2(std::vector<int> main, int depth);
std::vector<elem> insert_main(std::vector<int> main, int pack_size, int n_elems);
std::vector<elem> insert_pend(std::vector<int> main, int pack_size, int n_elems);
std::vector<int> jacobSeq(int N);

std::ostream    &operator<<(std::ostream &os, elem &rhs);

#endif
