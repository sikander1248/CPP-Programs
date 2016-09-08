#include <iostream>
using namespace std;

class LinearDS
{
public :
	 virtual void push(int ele) = 0;
	 virtual int pop()= 0;
	 virtual int  getNext() const = 0;
	 virtual bool empty( ) const = 0;
};

class MyStack : public LinearDS
{
	const int SIZE;
	int *buffer;
	int topIndex;
public : MyStack(int p_size);
	 void push(int ele);
	 int pop();
	 int  getNext() const;
	 bool empty( ) const;
};

class MyQueue : public LinearDS
{
	const int SIZE;
	int *buffer;
	int rearIndex;
	int frontIndex;
public : MyQueue(int p_size);
	 void push(int ele);
	 int pop();
	 int  getNext() const;
	 bool empty( ) const;
};
MyQueue::MyQueue(int p_size) : SIZE(p_size)
{
    buffer = new int[SIZE];
	rearIndex = -1;
	frontIndex = 0;
}

void MyQueue::push(int ele)
{
    if(rearIndex < SIZE - 1)
        buffer[++rearIndex] = ele;
    else
        cout << "Queue Full" << endl;
}

int MyQueue::pop()
{
    if(frontIndex > rearIndex)
        return 0;
    return buffer[frontIndex++];
}
int MyQueue::getNext() const
{
    return buffer[frontIndex];
}

bool MyQueue::empty() const
{
    return frontIndex > rearIndex ? true : false;
}


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
int MyStack::getNext() const
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
    enum {PUSH = 1, POP , GETNEXT , EMPTY};

    int size,dschoice;
    LinearDS *pds;
    cout <<"Enter 1 for Stack 2. Queue \n";
    cin >> dschoice;
    cout <<"Enter the size of Data Structure : ";
    cin >> size;

    if(dschoice == 1)
        pds = new MyStack(size);
    else
        pds = new MyQueue(size);


    int ch , ele;
    for(;;)
    {
        cout <<"\n 1. PUSH \n 2. POP \n 3. GETNEXT \n 4. EMPTY \n";
        cin >> ch;
        switch(ch)
        {
        case PUSH : cout << "Enter the element to insert ";
                    cin >> ele;
                    pds->push(ele);
                    break;
        case POP : cout << pds->pop();
                   break;
        case GETNEXT : cout << pds->getNext(); break;
        case EMPTY : cout << pds->empty(); break;
        default : return 0;
        }
    }
    return 0;
}
