/* Program to demonstrate creating of thread object and passing lambda*/
#include <iostream>
#include <thread>
using namespace std;


int main()
{
    int a = 5;
    cout << "Main thread id = "<<this_thread::get_id() << endl;
    thread t1([](){
              cout <<"Thread! using lambda " << this_thread::get_id() << endl;
              });

    t1.join();

    return 0;
}
