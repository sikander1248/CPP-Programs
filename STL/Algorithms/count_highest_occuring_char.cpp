#include <algorithm>
#include <iostream>
#include <string>

int main()
{
    std::string str = "JO JEETA WOHI_SIKANDER";
    int largest_count = 0;
    char most_occuring_char ;
    for(char key : str)
    {
        int n_occurances = std::count( std::begin(str), std::end(str) , key );
        std::cout << key <<" :" << n_occurances << std::endl;
        if(n_occurances > largest_count)
        {
            largest_count = n_occurances;
            most_occuring_char = key;
        }
    }
    
    std::cout <<"The character occuring most number of times  " << most_occuring_char << std::endl;
    
    return 0;
}
