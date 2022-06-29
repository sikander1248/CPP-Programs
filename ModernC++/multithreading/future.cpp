#include <future>
#include <thread>
#include <iostream>

using namespace std;

int factorial(int n)
{
    int res = 1;
    printf("factorial tid = %d \n ",this_thread::get_id());
    for(int i = 1 ; i <= n ; i++)
        res = res * i;
    return res;

}
int main()
{
    //thread t = thread(factorial , 5);
    printf("main tid = %d \n ",this_thread::get_id());
    //future<int> ft = async(factorial, 5);
future<int> ft = async(launch::async, factorial, 5);
    cout << ft.get() << endl;

}
