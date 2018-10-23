#include <iostream>
#include <thread>
using namespace std;
void fun1(int &x)
{
    cout << "Argument recieved" << x << endl;
    x = x * 2;
    cout << "Inside thread Updated x = "<<x << endl;
}

int main()
{
    int a = 5;
    //thread t1(fun1 , a);  // compilation error as the argument is recieved by reference.
    thread t1(fun1 , ref(a));  

    t1.join();

    cout << "Main Thread a = " <<a << endl;
    return 0;
}
