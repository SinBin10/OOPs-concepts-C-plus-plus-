#include<iostream>
using namespace std;
class time
{
    int hh,mm,ss;
    public:
    time()
    {
        hh = mm = ss = 0;
    }
    time(int h)
    {
        hh = 100; mm = 50; ss = 67;
    }
    void show()
    {
        cout<<hh<<mm<<ss;
    }
};
int main()
{
    time t1;
    t1.show();
    time t2(10);
    t2.show();
}
