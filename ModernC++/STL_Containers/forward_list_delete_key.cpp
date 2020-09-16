/*
    Program to search for a given key element and delete it.
    Forward List does not provide delete at given address, it provides delete after.
    To delete a node with given address, we need to copy the next node's data to current node
    and delete the next node.
*/
#include <iostream>
#include <algorithm>
#include <forward_list>

using namespace std;

void display(forward_list<int> fl)
{
    for(int ele : fl)
        cout << ele <<" ";
    cout << endl;
}

 int main()
 {
    forward_list<int>  fl = {12,23,34,45,56};

    int key;
    cout <<"Enter  the element to delete : ";
    cin >> key;

    forward_list<int>::iterator it = find(begin(fl), end(fl), key);

    if(it == end(fl))
    {
        cout <<"Element not found \n";
    }
    else
    {
        cout <<"Element found \n";
        forward_list<int>::iterator nextIt = it;
        nextIt++;
        if(nextIt == end(fl))
            cout <<"Cannot  delete the last node \n";
        else
        {
            *it = *nextIt;
            fl.erase_after(it);
        }
        cout <<"Forward List elements after deletion : ";
        display(fl);
    }
 }










