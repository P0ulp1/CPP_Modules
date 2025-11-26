#ifndef RPN_HPP
# define RPN_HPP

#include <iostream>
#include <stack>
#include <sstream>

class RPN
{
	private:
		std::stack<int> _data;
	public:
		RPN();
		~RPN();
		RPN(const RPN &copy);
		RPN &operator=(const RPN &rhs);

		int calculate(const std::string &str);
};

#endif
