#include <iostream>
#include <typeinfo>

using namespace std;

int main()
{
	auto x = 5;
	auto y = 5.5;
	cout << sizeof(x) << typeid(x).name() << endl;    	//4	int
	cout << sizeof(y) << typeid(y).name() << endl;    	//8	double
	return 0;
}
