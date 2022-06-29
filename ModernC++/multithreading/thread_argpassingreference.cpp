/* Program to demonstrate creating of thread object */
#include <iostream>
 #include <thread>
 using namespace std;

 void fun1(int &x) {
	++x;
    cout << "Inside thread " << x << endl;
 }


 int main() {
	int a = 5;

	thread t1(fun1 , ref(a));

    t1.join();
    cout << "Main thread" << a << endl;
    return 0;
 }


