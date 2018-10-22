#include <iostream>
#include <thread>
using namespace std;
void fun( )
{
    cout <<"Thread function" << endl;
}
int main() {
    
    thread t = thread(fun);
    
    t.join();
    
    cout << "Outside thread" << endl;
    return 0;
}
