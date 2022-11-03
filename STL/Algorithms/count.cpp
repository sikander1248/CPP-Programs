#include <algorithm>
#include <iostream>
#include <string>


int main()
{
    std::string str = "JO JEETA WOHI SIKANDER";
    char key;
	std::cout <<"Enter the element to search : ";
	std::cin >> key;
    
    int n_occurances = std::count( str.begin(), str.end() , key );
    
    if(n_occurances == 0)
		std::cout <<"Element not found \n";
    else
    {
		std::cout <<"Element found  " << n_occurances << std::endl;
    }
    return 0;
}
