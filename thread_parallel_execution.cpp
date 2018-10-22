/* Program to demonstrate creating of thread object */
#include <iostream>

#include <thread>
using namespace std;

void fun( )
{
    for(int i = 0 ; i < 100 ; i++)
        cout <<"*";
}
int main()
{
    thread t = thread(fun);
    for(int i = 0 ; i < 100 ; i++)
        cout <<"-";
    t.join();
    return 0;
}

