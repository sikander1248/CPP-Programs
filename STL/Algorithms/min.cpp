#include <algorithm>
#include <iostream>
#include <string>

int main( )
{
	int a = 5;
	int b = 10;
	std::cout << std::min(a , b) << std::endl;

	std::string s1 = "Karnataka", s2 = "Kerala";
	std::cout << std::min(s1 , s2) << std::endl;

	return 0;
}

