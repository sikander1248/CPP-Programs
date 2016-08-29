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
	{
		int len = strlen(ptr);
		str = new char[len + 1];
		strcpy(str , ptr);
    }
    void display(){
        cout << str << endl;
    }
};

 int main( )
 {
	MyString	s1 = "SIKANDER";
	s1.display();
	return 0;
 }




