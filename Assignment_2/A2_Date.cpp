#include<iostream>
using namespace std;
class Date{
private:
    int month;
    int day;
    int year;
public:
    Date(){
        cout<<"Enter month ,day and year:";
        cin>>month;
        cin>>day;
        cin>>year;
    }
    void setMonth(){
        if(month>=1 && month<=12)
            this->month=month;
        else this->month=1;
    }
    void setDay(){
    this->day=day;
    }
    void setYear(){
    this->year=year;
    }
     int getMonth(){
        return month;
    }
     int getDay(){
        return day;
    }
     int getYear(){
        return year;
    }
};
int main()
{
    Date d1;
    d1.setMonth();d1.setDay();d1.setYear();
    cout<<d1.getMonth()<<"/"<<d1.getDay()<<"/"<<d1.getYear();
    return 0;
}
