/* Program to demonstrate creating of thread object */
#include <iostream>
 #include <thread>
 using namespace std;

 
 int main() {
	int a = 5;

	thread t1([](){cout <<"Thread! using lambda"; });
    
    t1.join();

    return 0;
 }


