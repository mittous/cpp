#include <fstream>
#include <string>
#include <iostream>

int main (int ac, char **av)
{
	if (ac == 4)
	{
		std::ifstream myfile;
		std::string fileContent;
		std::string newString;
		size_t pos;
		std::string replaceFileName = std::string(av[1]) + ".replace";
		std::ofstream replace(replaceFileName);

		myfile.open(av[1]);
		if (!myfile.is_open())
		{
			std::cout << "Error: File not found" << std::endl;
			return (1);
		}
		getline(myfile, fileContent, '\0');

		while (av[2][0] != '\0' && av[3][0] != '\0')
		{
			pos = fileContent.find(av[2]);
			if (pos != fileContent.npos)
			{
				newString += fileContent.substr(0, pos) + av[3];
				fileContent = fileContent.substr(pos + strlen(av[2]), fileContent.length());
			}
			else
			{
				newString += fileContent;
				replace << newString;
				return 1;
			}
		}
		replace << fileContent;
	}
}


