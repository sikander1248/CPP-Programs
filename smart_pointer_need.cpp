
 #include <iostream>
 #include <cstring>
 #include <memory>
 using namespace std;

 class MyString{
    char *ptr;
  public:
    MyString(const char *str){
        cout <<"Constructor \n";
        ptr = new char[strlen(str) + 1];
        strcpy(ptr , str);
    }
	void display() const {
		cout << ptr << endl;
	}
 };

 int main( )
 {
    MyString  name = "SIKANDER";
	name.display();
 }