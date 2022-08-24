#include <iostream>
using namespace std;

int main() {
	auto x = 5;
	auto& r = x;

	cout << "x = " << x << " r = " << r << endl;

	x = 10;
	cout << "x = " << x << " r = " << r << endl;

	r = 20;
	cout << "x = " << x << " r = " << r << endl;
	
	const auto y = 10;	// const int
	y = 20;				//Error
	
	const auto& cr1 = x;            //valid, const int &
	cr1 = 30;                       //Error

	auto& cr2 = y;					//const int &
	cr2 = 30;                       //Error

	return 0;
}


