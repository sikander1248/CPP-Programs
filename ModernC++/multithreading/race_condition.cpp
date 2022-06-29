#include <iostream>
#include <thread>
using namespace std;

int sum = 0;

void square(int x) {
    int temp = sum;

	this_thread::sleep_for(chrono::seconds(1));

    sum = temp + (x * x);
	printf("x = %d sum = %d\n",x,sum);
}

int main() {
	thread t1(square , 2);

	thread  t2(square , 3);

	thread  t3(square , 4);
	t1.join();
	t2.join();
	t3.join();
    	
	cout << "Final Sum = " << sum << endl;
    	return 0;
}
