#include "Karen.hpp"

// Usage : ./karenFilter DEBUG or INFO or WARNING or ERROR

int main(int argc, char **argv)
{
	if (argc != 2)
	{
		std::cout << "Usage : ./karenFilter log level you want to listen to : DEBUG, INFO, WARNING or ERROR" << std::endl;
		return (0);
	}
	Karen karen;
	karen.complain(argv[1]);
	return (0);
}
