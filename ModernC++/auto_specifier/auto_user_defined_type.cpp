#include <iostream>
#include <string>
using namespace std;

class Student {
	int regno;
	string name;
public: 
	Student(int p_regno, string p_name) : regno(p_regno), name(p_name)
	{
	}
};

int main(void)
{
	auto  s1  = Student(1, "Sikander"); 
	auto  ptr = new Student(2, "Nihad");

	cout << sizeof(s1)  <<" : " << typeid(s1).name() << endl;
	cout << sizeof(ptr) <<" : " << typeid(ptr).name() << endl;

	return 0;
}
