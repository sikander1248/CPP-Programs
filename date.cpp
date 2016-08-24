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
        int differenceInDays(const Date &endDate){
            //Assuming every month has 30 days.
            int days = (endDate.month - this->month) * 30;
                days = days + (endDate.day - this->day);
            return days;
        }
};
int main()
{
    Date    issueDate(25 , 8  , 2016);
    Date    returnDate  (2 , 10 , 2016);
    cout <<"Book was borrowed for "
         << issueDate.differenceInDays(returnDate)
         <<" days"<<endl;

    return 0;
}
