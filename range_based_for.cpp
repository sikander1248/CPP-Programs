/* Accessing elements of containers using regular for loop */
#include <iostream>
#include <string>
#include <vector>
#include <list>
using namespace std;

int main()
{
	int a[] = {12,23,34,56,78};
	
	for(int ele : v)
		cout <<ele <<" ";
	cout << endl;
	
	vector<int> v;
	v.push_back(12);
	v.push_back(23);
	v.push_back(34);
	v.push_back(45);

	for(int ele : l)
		cout <<ele <<" ";
	cout << endl;
	
	list<int> l;
	l.push_back(90);
	l.push_back(78);
	
	for(int ele : l)
		cout <<ele <<" ";
	cout << endl;
	
	
}
