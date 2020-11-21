
#include <iostream>
#include <string>
#include <cstring>
#include <algorithm>

using namespace std;

class MyString
{
    char *buffer = nullptr;
public :
    MyString() = default;

    MyString(const char *str)
    {
        int len = strlen(str);
        buffer = new char[len + 1];
        strcpy(buffer, str);
    }
    MyString(const MyString &rhs) 
    {
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
        cout << buffer << endl;
    }
};
//Default Functions and  Deleted Function

int main( )
{
    MyString  ms1 ("Sikander"); // Parameterized Constructor
    MyString  ms2 = ms1;        // Shallow Copy

    cout <<"Contents of ms1 : ";
    ms1.display();
    cout <<"Contents of ms2 : ";
    ms2.display();

    ms2.modify("Keerthi");
    cout <<"-----------------------\n";
    cout <<"Contents of ms1 : ";
    ms1.display();                      //Keerthi
    cout <<"Contents of ms2 : ";
    ms2.display();

}
