#include<iostream>
using namespace std;
class time
{
    char hh;
    int mm,ss;
    public:
    time()
    {
        hh; mm = ss = 0;
    }
    time(int h)
    {
        hh = h;
    }
    time(char c)
    {
        hh = 'c';
    }
    void show()
    {
        cout<<hh<<" "<<mm<<" "<<ss;
    }
};
main()
{
    time t1(10);
     t1.show();
    time t2(char h);
   
    t2.show();
}