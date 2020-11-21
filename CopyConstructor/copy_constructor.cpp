

#include <iostream>
#include <string>
#include <cstring>
#include <algorithm>

using namespace std;

class MyString
{
public :
    MyString()
    {
        cout <<"Default constructor " << this << endl;
    }
    MyString(const char *str)
    {
        cout <<"Parameterized constructor " << this << endl;
    }
    MyString(const MyString &rhs)
    {
        cout <<"Copy constructor " << this << endl;
    }
    ~MyString()
    {
        cout <<"Destructor "<<this <<endl;
    }
};

void  func(MyString &ms)
{

}
int main( )
{
    MyString  ms1 = "Sikander"; // Parameterized Constructor.
    MyString  ms2 = "purnendu"; // Parameterized Constructor.
    cout <<"-------------------\n";

    func( ms1 );

    cout <<"===================\n";
}
