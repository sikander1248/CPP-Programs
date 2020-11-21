
#include <iostream>
#include <string>
#include <cstring>

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
        int len = strlen(rhs.buffer);
        buffer = new char[len + 1];
        strcpy(buffer, rhs.buffer );
    }
    char operator [](int index)
    {
        if(index < 0 || index > strlen(buffer) )
        {
            cout <<"Array Index out of bound \n";
            return 0;
        }
        return buffer[index];
    }
    void display()
    {
        cout <<(int *)buffer <<" : " << buffer << endl;
    }
    ~MyString()
    {
        cout <<"Destructor "<<this <<endl;
        delete [] buffer;
    }
};

int main( )
{
    string  s1 = "Sikander";
    cout <<"First Character " << s1[0] << endl;  // valid statement
    for(int i = 0 ; s1[i] != '\0' ; i++)
        cout << s1[i] << endl;

    MyString  ms1 = "Sourabh";
    cout <<"First Character " << ms1[0] << endl; //invalid statement
    for(int i = 0 ; ms1[i] != '\0' ; i++)
        cout << ms1[i] << endl;

}
