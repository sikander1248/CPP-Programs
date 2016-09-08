#include <iostream>
using namespace std;
class MyStack
{
	static const int SIZE = 5;
	int buffer[SIZE];
	int topIndex;
public : MyStack();
	 void push(int ele);
	 int pop();
	 int  getTop();
	 bool empty( );
};

MyStack::MyStack( )
{
	topIndex = -1;
}

void MyStack::push(int ele)
{
    if(topIndex < SIZE - 1)
        buffer[++topIndex] = ele;
    else
        cout << "Stack Full" << endl;
}

int MyStack::pop()
{
    if(topIndex == -1)
        return 0;
    return buffer[topIndex--];
}
int MyStack::getTop()
{
    if(topIndex == -1)
        return 0;
    return buffer[topIndex];
}

bool MyStack::empty()
{
    return topIndex == -1 ? true : false;
}



int main()
{
    /* Code to Test Stack */
    enum StackOperations{PUSH = 1, POP , GETTOP , EMPTY};
    MyStack    s1;
    int ch , ele;
    for(;;)
    {
        cout <<"\n 1. PUSH \n 2. POP \n 3. GETTOP \n 4. EMPTY \n";
        cin >> ch;
        switch(ch)
        {
        case PUSH : cout << "Enter the element to insert ";
                    cin >> ele;
                    s1.push(ele);
                    break;
        case POP : cout << s1.pop();
                   break;
        case GETTOP : cout << s1.getTop(); break;
        case EMPTY : cout << s1.empty(); break;
        default : return 0;
        }
    }
    return 0;
}








