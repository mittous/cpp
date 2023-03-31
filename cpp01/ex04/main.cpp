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
		unsigned long indx = 0;
		size_t pos =1;
		std::ofstream dupfile("ssd");
		bool check = false;
		
		
		myfile.open(av[1]);
		getline(myfile, fileContent, '\0');
		
		
		while ((pos = fileContent.find(av[2])))
		{
			std::cout << "kna hna \n";
			if (pos != fileContent.npos)
			{
				check = true;
				newString.substr(indx, pos+indx) + av[3];
				
				// fileContent = fileContent.substr(pos+strlen(av[2]));
			}
			else 
				break;
		}
		
		if (check == false)
			newString = fileContent;
		dupfile << newString;
	}
}
