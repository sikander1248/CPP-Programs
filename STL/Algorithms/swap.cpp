#include <algorithm>
#include <iostream>
#include <string>

int main( )
{
	int a = 5;
	int b = 10;
	std::cout <<"Before : " << a << "\t" << b << std::endl;	
	std::swap(a , b);
	std::cout <<"After : " << a << "\t" << b << std::endl;	

	double	c = 4.5 , d = 2.5;
	std::cout <<"Before : " << c << "\t" << d << std::endl;	
	std::swap(c , d);
	std::cout <<"After : " << c << "\t" << d << std::endl;	
	
	std::string s1 = "Sikander", s2 = "Muqaddar";
	std::cout <<"Before : " << s1 << "\t" << s2 << std::endl;	
	std::swap(s1, s2);
	std::cout <<"After : " << s1 << "\t" << s2 << std::endl;

	return 0;
}

