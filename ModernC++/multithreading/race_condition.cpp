/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
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
	t1.join();

	thread  t2(square , 3);
	t2.join();

	thread  t3(square , 4);
	t3.join();
    	
	cout << "Final Sum = " << sum << endl;
  return 0;
}
