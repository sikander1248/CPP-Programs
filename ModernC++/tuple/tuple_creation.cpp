
#include <iostream>
#include <string>
#include <tuple>
using namespace std;
int main()
{

    tuple<string,int> marksOneSubject ("C",12);


    tuple<string,int,int> marksTwoSubject("C",12,25);


    cout << get<0>(marksOneSubject) <<" ";
    cout << get<1>(marksOneSubject) <<endl;
    cout <<"\n ----------------\n";
    cout << get<0>(marksTwoSubject) <<" ";
    cout << get<1>(marksTwoSubject) <<" ";
    cout << get<2>(marksTwoSubject) <<endl;
}
