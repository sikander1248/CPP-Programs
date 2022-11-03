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
    
    int no_primes = std::count_if( std::begin(arr), std::end(arr) , isPrime );
    if(no_primes == 0 )
        std::cout <<"There are no prime numbers \n";
    else
        std::cout <<"Number of Prime Numbers are : " << no_primes << std::endl;
    
    return 0;
}
