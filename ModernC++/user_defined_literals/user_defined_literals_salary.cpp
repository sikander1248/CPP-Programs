#include <iostream>
using namespace std;

unsigned long long int operator"" _l(unsigned long long int x)
{
	return x * 100000;
}
int operator"" _k(unsigned long long int x)
{
	return x * 1000;
}
int main()
{
	int salary = 2_l;
	int rent = 30_k;
	int food = 8000;
	int misc = 12_k;
	int savings = salary - (rent + food + misc);
	cout << "Salary  : " << salary  << endl;
	cout << "Rent    : " << rent    << endl;
	cout << "Food    : " << food    << endl;
	cout << "Misc    : " << misc    << endl;
	cout << "Savings : " << savings << endl;
}