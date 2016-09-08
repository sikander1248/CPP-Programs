#include <iostream>
using namespace std;
class MyStack
{
	const int SIZE;
	int *buffer;
	int topIndex;
public : MyStack(int p_size);
	 void push(int ele);
	 int pop();
	 int  getTop() const;
	 bool empty( ) const;
};

MyStack::MyStack(int p_size) : SIZE(p_size)
{
    buffer = new int[SIZE];
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
int MyStack::getTop() const
{
    if(topIndex == -1)
        return 0;
    return buffer[topIndex];
}

bool MyStack::empty() const
{
    return topIndex == -1 ? true : false;
}

int main()
{
    /* Code to Test Stack */
    enum StackOperations{PUSH = 1, POP , GETTOP , EMPTY};

    int stacksize;
    cout <<"Enter the size of Stack : ";
    cin >> stacksize;
    MyStack    s1 = MyStack(stacksize);

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








