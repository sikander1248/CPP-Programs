#include <iostream>
#include <thread>
using namespace std;
void fun1(int x)
{
    cout << "Inside One argument thread " << x << endl;
}

void fun2(int a,int b)
{
        cout <<"Inside Two argument thread " << a << "\t"<<b<<endl;
}
int main()
{
    thread t1(fun1 , 100);
    thread t2(fun2 ,  5, 10);

    t1.join();
    t2.join();
    cout << "Main Thread" << endl;
    return 0;
}
