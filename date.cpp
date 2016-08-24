#include <iostream>
using namespace std;
class Date
{
    int day;
    int month;
    int year;
public :Date(int day,int month,int year) {
            this->day = day;
            this->month = month;
            this->year = year;
        }
        void print()  {
            cout <<day<<"-"<<month<<"-"<<year<<endl;
        }
};
int main()
{
    Date    birthDate(25,8,1973);

    birthDate.print();
}
