#include "../includes/RPN.hpp"

RPN::RPN()
{
}

RPN::~RPN()
{
}

RPN::RPN(const RPN &copy) : _data(copy._data)
{
}

RPN &RPN::operator=(const RPN &rhs)
{
	if (this != &rhs)
	{
		_data = rhs._data;
	}
	return (*this);
}

static int is_operator(const int &c)
{
	if (c == '+' || c == '-' || c == '/' ||  c == '*')
		return (1);
	return (0);
}

static int parsing(const std::string &str)
{
	int i = 0;
	while (str[i])
	{
		if (i == 0 && !isdigit(str[i]))
			return (1);
		if (isdigit(str[i]) && isdigit(str[i + 1]))
			return (1);
		if (str[i] == ' ' && (!is_operator(str[i + 1]) || isdigit(str[i + 1])))
			return (1);
	}
	return (0);
}

int RPN::calculate(const std::string &str)
{
	if (parsing(str))
	{
		std::cout << "An error occured while parsing input. Please check your input." << std::endl;
		return (1);
	}

	 

	return (0);
}