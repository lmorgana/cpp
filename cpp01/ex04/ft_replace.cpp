
#include "header.hpp"

int	my_replace(std::string& str1, int start,
				   int len, std::string s1)
{
	str1.erase(start, len);
	str1.insert(start, s1);
	return (start + s1.length());
}

int	ft_process(std::ifstream& rFile, std::ofstream& wFile,
				  std::string& s1, std::string& s2)
{
	std::string		str1;
	size_t			n;

	while (1)
	{
		getline(rFile, str1);
		if (rFile.eof())
			break;
		n = 0;
		while ((n = str1.find(s1, n)) != std::string::npos)
			n = my_replace(str1, n, s1.length(), s2);
		wFile << str1 << std::endl;
	}
	return (1);
}

char	*ft_makeName(char *nameFile, std::string& str1)
{
	str1 = nameFile;
	str1 += ".replace";
	return (&(str1[0]));
}

int	ft_replace(char* nameFile, std::string s1, std::string s2)
{
	std::ifstream	rFile;
	std::ofstream	wFile;
	std::string		str1;

	rFile.open(nameFile, std::ios::in);
	if (rFile.is_open())
	{
		wFile.open(ft_makeName(nameFile, str1), std::ios::out);
		if (wFile.is_open())
		{
			ft_process(rFile, wFile, s1, s2);
			rFile.close();
			wFile.close();
			return (1);
		}
		else
			rFile.close();
	}
	return (errorMsg("Error:\ncannot open file"));
}
