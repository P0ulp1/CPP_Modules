#include "../includes/RPN.hpp"

int main(int argc, char **argv)
{
	if (argc != 2)
	{
		std::cout << "[-] Usage: ./rpn \"1 2 + 3 *\"" << std::endl;
		return (1);
	}
	
	RPN inst;
	if (inst.calculate(argv[1]))
		return (1);
	
	return (0);
}
