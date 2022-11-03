#include <algorithm>
#include <iostream>
#include <string>

bool compare(int a,int b)
{
    return a > b;
}
int main()
{
    int arr[] = { 2, 4, 6, 0, 1, 8, 3 };
    int n = sizeof (arr) / sizeof (int);    
    
    std::cout <<"Before Sorting \n";
    for(int ele : arr)
        std::cout << ele <<" ";
    
    std::sort(arr, arr + n , compare );
    
    std::cout <<"\nAfter Sorting \n";
    for(int ele : arr)
        std::cout << ele <<" ";
    
    return 0;
}
