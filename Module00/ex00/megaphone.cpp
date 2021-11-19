# include <iostream>

int main (int argc, char **argv)
{
	int i = 1;
	int j = 0;

	if (argc == 1)  
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl; 
	else
	{
		while (i < argc)
		{
			j = 0;
			while (argv[i][j])
			{
				std::cout << (char)toupper(argv[i][j]);
				j++;
			}
			std::cout << " ";
			i++;
		}
		std::cout << std::endl;
	}
	return (0);
}
