#include <iostream>
#include <string>
#include <fstream>

// Usage : ./replace filename string1 string2
// replace takes a filename and two strings, open the file, and write its contents to FILENAME.replace, after replacing every occurrence of s1 with s2.

int	check(int argc, char **argv)
{
	if (argc != 4)
	{
		std::cout << "Usage : ./replace filename string1 string2" << std::endl;
		return (1);
	}
	if (strcmp( argv[2], "") == 0 || strcmp( argv[3], "") == 0)
	{
		std::cout << "Usage : the strings cannot be empty" << std::endl;
		return (1);
	}
	std::ifstream file(argv[1]);
	if(!file)
	{
		std::cout << "Input file does not exist or cannot be opened" << std::endl;
		return (1);
	}
	file.close();
	return (0);
}

std::string	ft_replace(char **argv, std::string input)
{
	std::string s1 = argv[2];
	std::string s2 = argv[3];
	std::string::size_type found = 0; // std::string::size_type :  integer datatype large enough to represent any possible string size
	while ((found = input.find(s1)) != -1) // loop until there are no more occurences of s1 to replace in input.
	// std::find() returns The position of the first character of the first match.
	// If no matches were found, the function returns basic_string::npos (static const size_type npos = -1;)
	{
		input.erase(found, s1.length());
		input.insert(found, s2);
	}
	return (input);
}

int main(int argc, char **argv)
{
	if (check(argc, argv))
		return (0);
	std::ifstream ifs(argv[1]); // creates an input stream and open the file argv[1]
	std::string input;
	getline(ifs, input, '\0'); // Extracts characters from ifs and stores them into input until the delimitation character \0 is found
	ifs.close();

	std::string outfile = argv[1];
	outfile.append(".replace");
	std::ofstream ofs(outfile); // creates and open a file argv[1].replace with an outstream
	if (input.length())
	{
		input = ft_replace(argv, input);
		ofs << input;
	}
	ofs.close();
}
