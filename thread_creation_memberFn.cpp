#include <thread>
#include <iostream>
#include <cstdio>
using namespace std;

class ThreadMF
{
    char c;
public:
    ThreadMF(char _c) : c(_c)
    {}
    void display(int n) const
    {
        std::thread::id tid = this_thread::get_id();
        printf(" %d %p\n",tid, this);
        for(int i = 0 ; i < n ; i++)
            cout<<c;
    }
};

int main()
{
    ThreadMF obj1('*');
    ThreadMF obj2('-');
    cout <<"&obj1 = " << &obj1 << endl;
    cout <<"&obj2 = " << &obj2 << endl;
    thread t1(ThreadMF::display , &obj1,200);
    thread t2(ThreadMF::display , &obj2,200);
    t1.join();
    t2.join();
}

