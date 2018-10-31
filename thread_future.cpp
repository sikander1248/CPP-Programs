#include <iostream>
#include <thread>
#include <mutex>
#include <future>

using namespace std;

int calculate(int n) {
	
	int sum = 0;
	for(int i = 0 ; i < n ; i++)
	{
		this_thread::sleep_for(chrono::seconds(1));
		sum = sum + i;
	}
	return sum;
	
}
int main() {
	time_t start = time(NULL);
	future<int> f=async(calculate, 5);
	for(int i = 0 ; i < 3 ; i++)
	{
		this_thread::sleep_for(chrono::seconds(1));	
	}
	cout << time(NULL) - start << endl;
	cout << f.get() << endl;
	time_t end = time(NULL);
	cout << end - start << endl;
}
