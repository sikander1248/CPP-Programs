/* Program to demonstrate creating of thread object */
 #include <iostream>
 #include <thread>
 using namespace std;

 void fun( )
 {
	cout <<"Inside  thread " << endl;
 }
 int main()
 {
    thread t(fun);
    t.join();
    cout << "Outside thread" << endl;
    return 0;
 }
