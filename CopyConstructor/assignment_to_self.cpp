
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

    void display()
    {
        cout <<(int *)buffer <<" : " << buffer << endl;
    }
    MyString & operator =(const MyString &rhs)
    {
        cout <<"Assignment Operator " << this << endl;
        cout <<"&rhs " << &rhs << endl;
        if(this != &rhs)
        {
            if( buffer != nullptr)
                delete [] buffer;
            int len = strlen(rhs.buffer);
            buffer = new char[len + 1];
            strcpy(buffer, rhs.buffer );
        }
        return *this;
    }
    ~MyString()
    {
        cout <<"Destructor "<<this <<endl;
        delete [] buffer;
    }
};

int main( )
{
    MyString  ms1 ("Sikander"); // Parameterized Constructor
    MyString  ms2 = "Manimaran";  //Initialization - Constructors
    cout <<"Contents of ms1 : ";
    ms1.display();
    cout <<"Contents of ms2 : ";
    ms2.display();

    cout <<"\n-----------------\n";
    ms1 = ms1;  //Assignment to  self.
    cout <<"-----------------------\n";
    cout <<"Contents of ms1 : ";
    ms1.display();
    cout <<"Contents of ms2 : ";
    ms2.display();
}
