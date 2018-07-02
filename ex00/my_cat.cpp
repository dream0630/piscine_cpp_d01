#include <iostream>
#include <string>
#include <cstring>
#include <fstream>
#include <ios>

void my_cat(char **av)
{
	int i;

	i = 0;
	char c;
	while (av[++i] != NULL)
	{
		std::ifstream file(av[i], std::ios::in);
		if (!file)
			std::cerr << "my_cat: " << av[i] <<": No such file or directory"<< std::endl;
		else
			while (file.get(c))
				std::cout << c;
	}
}

int main(int ac, char **av)
{
	if (ac >= 2)
		my_cat(av);
	else
		std::cout << "my_cat: Usage : ./my_cat file [...]\n";
	return (0);
}
