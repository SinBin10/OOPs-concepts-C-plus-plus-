#include<iostream>
using namespace std;
class time
{
    int hh;
    int mm;
    int ss;
    public:
    void input()
    {
        cout<<"Enter the hour : ";
        cin>>hh;
        cout<<"Enter the minutes : ";
        cin>>mm;
        cout<<"Enter the seconds : ";
        cin>>ss;
    }
    void show();
};
void time::show()
    {
        cout<<"The hour is : "<<hh<<endl;
        cout<<"The minutes is : "<<mm<<endl;
        cout<<"The seconds is : "<<ss<<endl;
    }
int main()
{
    time t1;
    t1.input();
    t1.show();
}