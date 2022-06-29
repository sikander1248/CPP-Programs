#include <thread>
#include <iostream>

using namespace std;

class ThreadMemberFunction
{ 
	int m_a;
public:
	ThreadMemberFunction(int x) : m_a(x) 
	{}
    void greeting() const {
         cout<<"Thread "<<m_a<<std::endl;
		
    }
};

int main()
{
	ThreadMemberFunction obj1(5);
	ThreadMemberFunction obj2(10);
	
	thread t1(&ThreadMemberFunction::greeting , &obj1);
	thread t2(&ThreadMemberFunction::greeting , &obj2);
    t1.join();
	t2.join();
}

