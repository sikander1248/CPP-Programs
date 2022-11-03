#include <algorithm>
#include <iostream>

int main()
{
    int arr[] = {12,21,23,32,34,43};
    int n = sizeof(arr) / sizeof(int);
    int key;
    std::cout <<"Enter the element to search : ";
	std::cin >> key;
    
    int *ptr = std::find(arr , arr + n , key );
    if(ptr == arr + n)
        std::cout <<"Element not found \n";
    else
    {
        int index = ptr - arr;
		std::cout <<"Element found at index " << index << std::endl;
    }
    return 0;
}

