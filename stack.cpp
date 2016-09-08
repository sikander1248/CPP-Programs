#include <iostream>
using namespace std;

template <class T>
class LinearDS
{
public :
	 virtual void push(T ele) = 0;
	 virtual T pop()= 0;
	 virtual T  getNext() const = 0;
	 virtual bool empty( ) const = 0;
};

template <class T>
class MyStack : public LinearDS<T>
{
	const int SIZE;
	T *buffer;
	int topIndex;
public : MyStack(int p_size);
	 void push(T ele);
	 T pop();
	 T  getNext() const;
	 bool empty( ) const;
};

template <class T>
class MyQueue : public LinearDS<T>
{
	const int SIZE;
	T *buffer;
	int rearIndex;
	int frontIndex;
public : MyQueue(int p_size);
	 void push(T ele)
	 {
        if(rearIndex < SIZE - 1)
            buffer[++rearIndex] = ele;
        else
            cout << "Queue Full" << endl;
    }
	 T pop()
	 {
        if(frontIndex > rearIndex)
            return 0;
        return buffer[frontIndex++];
    }

	T  getNext() const
	{
        return buffer[frontIndex];
    }
	 bool empty( ) const
	 {
        return frontIndex > rearIndex ? true : false;
     }
};

template <class T>
MyQueue<T>::MyQueue(int p_size) : SIZE(p_size)
{
    buffer = new T[SIZE];
	rearIndex = -1;
	frontIndex = 0;
}

template <class T>
MyStack<T>::MyStack(int p_size) : SIZE(p_size)
{
    buffer = new T[SIZE];
	topIndex = -1;
}
template <class T>
void MyStack<T>::push(T ele)
{
    if(topIndex < SIZE - 1)
        buffer[++topIndex] = ele;
    else
        cout << "Stack Full" << endl;
}
template <class T>
T MyStack<T>::pop()
{
    if(topIndex == -1)
        return 0;
    return buffer[topIndex--];
}

template <class T>
T MyStack<T>::getNext() const
{
    if(topIndex == -1)
        return 0;
    return buffer[topIndex];
}

template <class T>
bool MyStack<T>::empty() const
{
    return topIndex == -1 ? true : false;
}

int main()
{
    /* Code to Test Stack */
    enum {PUSH = 1, POP , GETNEXT , EMPTY};

    int size,dschoice;
    LinearDS <string> *pds;
    cout <<"Enter 1 for Stack 2. Queue \n";
    cin >> dschoice;
    cout <<"Enter the size of Data Structure : ";
    cin >> size;

    if(dschoice == 1)
        pds = new MyStack<string>(size);
    else
        pds = new MyQueue<string>(size);


    int ch;
    string ele;
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
