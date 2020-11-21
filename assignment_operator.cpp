
#include <iostream>
#include <string>
#include <cstring>
#include <algorithm>

using namespace std;

class MyString
{
    char *buffer = nullptr;
public :
    MyString()
    {
        cout <<"Default constructor " << this << endl;
    }

    MyString(const char *str)
    {
        cout <<"Parameterized constructor " << this << endl;
        int len = strlen(str);
        buffer = new char[len + 1];
        strcpy(buffer, str);
    }
    MyString(const MyString &rhs)
    {
        cout <<"Copy constructor " << this << endl;
        //buffer = rhs.buffer;

        int len = strlen(rhs.buffer);
        buffer = new char[len + 1];
        strcpy(buffer, rhs.buffer );

    }
    void modify(const char *newData)
    {
        strcpy(buffer, newData);
    }
    void display()
    {
        cout <<(int *)buffer <<" : " << buffer << endl;
    }
    void operator =(const MyString &rhs)
    {
        cout <<"Assignment Operator " << this << endl;
        delete [] buffer;
        int len = strlen(rhs.buffer);
        buffer = new char[len + 1];
        strcpy(buffer, rhs.buffer );
    }
    ~MyString()
    {
        cout <<"Destructor "<<this <<endl;
        delete [] buffer;
    }
};
//Default Functions and  Deleted Function

int main( )
{
    MyString  ms1 ("Sikander"); // Parameterized Constructor
    MyString  ms2 = "Manimaran";  //Initialization - Constructors

    cout <<"Contents of ms1 : ";
    ms1.display();
    cout <<"Contents of ms2 : ";
    ms2.display();

    cout <<"\n-----------------\n";
    ms2 = ms1;  //Assignment
    cout <<"-----------------------\n";
    cout <<"Contents of ms1 : ";
    ms1.display();                      //Keerthi
    cout <<"Contents of ms2 : ";
    ms2.display();
}
