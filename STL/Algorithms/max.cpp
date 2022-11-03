#include <algorithm>
#include <iostream>
#include <string>

int main( )
{
	int a = 5;
	int b = 10;
	std::cout << std::max(a , b) << std::endl;

	std::string s1 = "Sikander", s2 = "Bangalore";
	
	std::cout << std::max(s1 , s2) << std::endl;

	return 0;
}

