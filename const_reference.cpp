#include <iostream>
#include <cstdio>
using namespace std;

int main( )
{
    int a = 5;
    int b = 10;

    int c1 = a;     // a -> lvalue object
    int c2 = a + b; // a + b -> rvalue object
    int c3 = 5;     // 5 (literal) -> rvalue object

    int &r1 = a;
    int &r2 = a + b;    //invalid
    int &r3 = 5;        //invalid

    const int &cr1 = a;
    const int &cr2 = a + b;
    const int &cr3 = 5;

}
