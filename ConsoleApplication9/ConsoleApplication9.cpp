#include <iostream>
#include <string>
#include <sstream>

int main()
{
	std::string str = "bdfbdfbavnbbfbb";
	std::string word;
	std::istringstream ins(str);
	int count = 0;
	while (ins >> word)
		if (word[0] == 'b') count++;
	std::cout<<"The number of words starting with the letters b means:" << count << std::endl;
	return 0;
}
