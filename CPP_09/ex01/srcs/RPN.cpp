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

static int is_digit(const int &c)
{
	if (c >= 48 && c <= 57)
		return (1);
	return (0);
}

static int is_operator(const int &c)
{
	if (c == '+' || c == '-' || c == '/' ||  c == '*')
		return (1);
	return (0);
}

static int count_operators(const std::string &str)
{
	int count = 0;
	for (size_t i = 0; i < str.size(); i++)
	{
		if (is_operator(str[i]))
			count++;
	}
	return (count);
}

static int count_digits(const std::string &str)
{
	int count = 0;
	for (size_t i = 0; i < str.size(); i++)
	{
		if (is_digit(str[i]))
			count++;
	}
	return (count);
}

static int parsing(const std::string &str)
{
	size_t i = 0;
	int digits = count_digits(str);
	int operators = count_operators(str);
	if (digits != operators + 1) {
		std::cout << "Digits: " << digits << " Operators: " << operators << std::endl;
		return (1);
	}
	while (str[i])
	{
		if (i == 0 && !is_digit(str[i])) {
			return (1);
		}
		if (i != 0 && is_digit(str[i]) && str[i - 1] != ' ' && str[i + 1] != ' ') {
			return (1);
		}
		if (i == str.size() && !is_operator(str[i])) {
			return (1);
		}
		if (i != 0 && i != str.size() && is_operator(str[i]) && str[i - 1] != ' ' && str[i + 1] != ' ') {
			return (1);
		}
		i++;
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

	char c;
	double res;
	double a;
	double b;
	std::istringstream string(str);
	while (string >> c)
	{
		if (is_operator(c))
		{
			if (_data.size() < 2)
				return (1);

			a = _data.top();
			_data.pop();
			b = _data.top();
			_data.pop();

			if (c == '-')
				res = b - a;
			else if (c == '+')
				res = b + a;
			else if (c == '*')
				res = b * a;
			else
				res = b / a;

			_data.push(res);
		}
		else
			_data.push(c - '0');
	}

	if (_data.size() != 1)
		return (1);

	std::cout << "Result is: " << _data.top() << std::endl;

	return (0);
}
