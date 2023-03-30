#include <fstream>
#include <string>
#include <iostream>

int main (int ac, char **av)
{
	if (ac == 4)
	{
		std::ifstream myfile;
		std::string fileContent;
		std::string new_string;
		unsigned long indx = 0;
		myfile.open(av[1]);
		getline(myfile, fileContent, '\0');

		while (indx < fileContent.length())
		{
			size_t pos = fileContent.find(av[2]);
			if (pos)
			{
				new_string += fileContent.substr(indx, pos);
				indx = pos+strlen(av[2]);
				fileContent = fileContent.substr(indx);
				
				
				
				std::cout << indx << std::endl;
			}   
			std::cout << fileContent << "\n";

			// else

			// if (pos!=std::string::npos)


			// indx++;
		}
		
		std::ofstream dupfile("new_file.txt");
		dupfile << new_string;
		dupfile.close();
	}
}
