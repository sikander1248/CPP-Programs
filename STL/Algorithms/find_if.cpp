#include <algorithm>
#include <iostream>
#include <string>

bool isPrime(int num)
{
    for(int i = 2 ; i <= num/2 ; i++)
        if(num % i == 0)
            return false;
    return true;
}
int main()
{
    int arr[] = {12,21,34,32,5,65,34,23,43};
    
    int *ptr = std::find_if( std::begin(arr), std::end(arr) , isPrime );
    if(ptr == std::end(arr) )
        std::cout <<"There are no prime numbers \n";
    else
        std::cout <<"First Prime Number is : " <<*ptr << std::endl;
    
    return 0;
}
