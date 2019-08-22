/* Accessing elements of containers using regular for loop */
#include <iostream>
#include <string>
#include <vector>
#include <list>
using namespace std;

int main()
{
	int a[] = {12,23,34,56,78};
	
	int n = sizeof(a) / sizeof(int);
	for(int i = 0 ; i < n ; i++)
		cout << a[i] <<" ";
	
	vector<int> v;
	v.push_back(12);
	v.push_back(23);
	v.push_back(34);
	v.push_back(45);

	
	for(int i = 0 ; i < v.size() ; i++)
		cout << v[i] <<" ";
	
	list<int> l;
	l.push_back(90);
	l.push_back(78);
	
	list<int>::iterator it = l.begin();
	while(it != l.end())
	{
		cout << *it <<" ";
		++it;
	}
	
	
}
