#include <algorithm>
#include <iostream>
#include <string>

int main( )
{
	int arr[] = { 5 , 1 , 8 , 2 , 6};

	int *ptr_i = std::max_element( arr , arr + 5);
	std::cout <<"The max element is " << *ptr_i << std::endl;
	std::cout <<"Max element is at Index " << ptr_i - arr << std::endl;

	//-------------------------------------------------------------------
	
	std::string names[] = {"nihad","sikander","jeyramudu","mohsin"};
	std::string *ptr_s = std::max_element( names , names + 4);

	std::cout <<"The max element name " << *ptr_s << std::endl;
	std::cout <<"Max element is at Index " << ptr_s - names << std::endl;

    return 0;
}

