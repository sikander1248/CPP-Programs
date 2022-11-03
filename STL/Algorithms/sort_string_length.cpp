#include <algorithm>
#include <iostream>
#include <string>
using namespace std;

bool compare(const std::string &a,const std::string &b)
{
    return a.length() < b.length();
}

int main()
{
    std::string names[] = {"sikander","shalini","veena","deepshikha","shazi","pavan"};
    
    std::cout <<"Before Sorting \n";
    for(std::string ele : names)
        std::cout << ele <<" ";
    
    std::sort( std::begin(names), std::end(names) , compare );
    
    std::cout <<"\nAfter Sorting \n";
    for(std::string ele : names)
        std::cout << ele <<" ";
    
    return 0;
}

