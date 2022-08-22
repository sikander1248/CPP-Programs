
#include <iostream>
#include <typeinfo>
using namespace std;
int main()
{
	auto	x = 5;
	const auto y = 8;
	auto px = &x;
	auto py = &y;

	cout <<"Type of px : " << typeid(px).name() << endl;
	cout <<"Type of py : " << typeid(py).name() << endl;
}

