#include <iostream>										
using namespace std;

long double operator "" _mm(long double x)
{
	return x;
}
long double operator "" _cm(long double x)
{
	return x * 10;
}
long double operator "" _m(long double x)
{
	return x * 1000;
}
int main()
{
	long double length = 4.0_mm;
	long double width = 2.0_m;
	long double height = 5.0_cm;

	cout << "Length : " << length << endl;
	cout << "Width  : " << width << endl;
	cout << "Height : " << height << endl;

	long double volume = length * width * height;
	cout << "Volume : " << volume << endl;
	return 0;
}




