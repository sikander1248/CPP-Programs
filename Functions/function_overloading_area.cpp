#include <iostream>
using namespace std;

double area(int radius)
{
    return 3.14 * radius * radius;
}

int area(int length,int breadth)
{
    return length * breadth;
}
int main()
{
    cout << area(5) << endl;
    cout << area(5 , 3) << endl;

    return 0;
}


