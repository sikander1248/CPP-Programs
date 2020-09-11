#include <iostream>
#include <optional>
using namespace std;
optional<int> divide(int a,int b)
{
    if( b != 0)
        return a / b;
    else
        return {};
}

void testOptional(int a,int b)
{
    optional<int> res = divide(a, b);
    
    if( res )
        cout <<"Value recieved : " << *res <<endl;
    else
        cout <<"Value not recieved \n";
}
int main()
{
    testOptional(5,0);
    testOptional(5,2);
}
