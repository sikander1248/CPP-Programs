/* Program to demonstrate creating of thread object */
#include <iostream>
#include <thread>
using namespace std;

void fun1(int x) {
    cout << "Inside One argument thread " << x << endl;
}

void fun2(int a,int b)
{
	cout <<"Inside Two argument thread " << a << "\t"<<b<<endl;
}
int main() 
{

    thread t1(fun1, 8);
    thread t2(fun2 ,  5 , 10);

    t1.join();
    t2.join();

    cout << "Outside thread" << endl;

    return 0;
}
