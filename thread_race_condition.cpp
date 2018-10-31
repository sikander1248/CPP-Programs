#include <iostream>
#include <vector>
#include <thread>
 
using namespace std;
#define SLEEP
int accum = 0;

void square(int x) {
    int temp = accum;
#ifdef SLEEP
	this_thread::sleep_for(chrono::seconds(1));
#endif
    accum = x * x + temp;
}

int main() {
	thread	t1(square , 2);
	thread  t2(square , 3);
	thread  t3(square , 4);

	t1.join();
	t2.join();
	t3.join();
    cout << "accum = " << accum << endl;
    return 0;
}
