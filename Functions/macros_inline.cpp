#include <iostream>
using namespace std;

#define SQUARE(x) 	x * x 

inline int square(int x)
{
	return x * x;
}
int main( )
{
	int x = 5;

	cout << SQUARE( x + 2) << endl;

	cout << square( x + 2) << endl;
	
	return 0;
}


