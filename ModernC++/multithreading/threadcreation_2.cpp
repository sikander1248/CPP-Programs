/* Program to demonstrate creating of thread object */
#include <thread>
#include <iostream>

using namespace std;

void func()
{
    cout <<"Running in Thread";
}
int main( )
{
    thread  t ;
    t = thread(func);

    t.join();
}
