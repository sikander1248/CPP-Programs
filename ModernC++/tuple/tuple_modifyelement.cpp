#include <iostream>
#include <string>

 #include <tuple>
 using namespace std;

 int main()
 {
    tuple<string,int> marksOneSubject ("C",12);

    cout << get<0>(marksOneSubject) <<" ";
    cout << get<1>(marksOneSubject) <<endl;

    get<1>(marksOneSubject) = 15;

    cout <<"\n ----------------\n";
    cout << get<0>(marksOneSubject) <<" ";
    cout << get<1>(marksOneSubject) <<endl;

    return 0;
 }
