#include <iostream>
using namespace std;
class Time
{
    int hh;
    int mm;
    int ss;
    public:
    void input()
    {
        cout<<"Enter the hours : ";cin>>hh;
        cout<<"Enter the minutes : ";cin>>mm;
        cout<<"Enter the seconds : ";cin>>ss;
    }
    void display()
    {
        cout<<"hh : "<<hh<<endl;
        cout<<"mm : "<<mm<<endl;
        cout<<"ss : "<<ss<<endl;
    }
};
int main()
{
    Time t1;
    t1.input();
    t1.display();
    return 0;
}