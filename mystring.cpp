#include <iostream>
#include <string.h>
#include <string>
using namespace std;

class MyString
{
	char *str;
 public :
     MyString( ){
         str = NULL;
    }
	MyString(const char *ptr)
	{   cout <<"Parameterized Constructor " << endl;
		int len = strlen(ptr);
		str = new char[len + 1];
		strcpy(str , ptr);
    }
    void display(){
        cout <<(int *)str <<" "<<str << endl;
    }
    ~MyString(){
        cout <<"Destructor " << endl;
        delete [] str;
    }
    MyString(const MyString &old){
        cout <<"Copy Constructor "<<endl;
        int length = strlen(old.str);
        str = new char[length + 1];
        strcpy(str , old.str);
    }
};

 int main( )
 {
	MyString	s1 = "SIKANDER";
	MyString    s2 = s1;
	s1.display();
	s2.display();
	return 0;
 }
