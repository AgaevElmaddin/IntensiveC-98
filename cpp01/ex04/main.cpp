#include <iostream>
#include <fstream>
//#include <string>

void		replace(std::string filename, std::string s1, std::string s2)
{
	if (s1 == "" || s2 == "")
	{
		std::cout << "s1 and s2 can't be empty" << std::endl;
		exit(1);
	}
		std::ifstream fin;

		fin.open(filename);
		if (!fin.is_open())
		{
			std::cout << "Error: cannot open " << filename << std::endl;
			exit(1);
		}
		for (size_t i = 0; i < filename.length(); i++)
			filename[i] = (char)toupper(filename[i]);
		filename += ".replace";
		std::ofstream fout;
		fout.open(filename);
		if (!fout.is_open())
		{
			std::cout << "Error: cannot open " << filename << std::endl;
			exit(1);
		}
		std::string str;
		while (!fin.eof())
		{
			getline(fin, str);
			std::size_t find_pos;
			while (1)
			{
				find_pos = -1;
				find_pos = str.find(s1);
				{
					if (find_pos >= 0 && find_pos <= str.length())
					{
						fout << str.substr(0, find_pos) << s2;
						str.erase(0, find_pos + s1.length());
					}
					else
					{
						fout << str;
						break;
					}
				}
			}
			if (!fin.eof())
				fout << std::endl;
		}
		fin.close();
		fout.close();
}

int	main(int argc, char **argv)
{
	if (argc != 4)
	{
		std::cout << "Error: invalid number of arguments!" << std::endl;
		std::cout << "Write as following structure: argv[0] = ./replace ";
		std::cout << "argv[1] = filename argv[2] = s1 argv[3] = s2" << std::endl;
	}
	else
		replace(argv[1], argv[2], argv[3]);

	return (0);
}
