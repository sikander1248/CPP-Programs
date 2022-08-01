#include <iostream> 
 
using namespace std;
 
void printBinary(int num,int  bits = 8)
{
    for(int i = bits - 1 ; i >= 0 ; i--)
        cout << ((num & 1 << i )?1:0) ;
    cout << endl;
}
 
int main( )
{
    printBinary(500 , 16);
 
    printBinary(12 , 4);
 
    printBinary(23);

    return 0;
}
 

