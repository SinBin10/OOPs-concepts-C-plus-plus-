#include <iostream>
using namespace std;
class A
{
    int a;
    public:
    void input()
    {
        cin>>a;
    }
    void show()
    {
        cout<<a;
    }
};
class B
{
    int b;
    public:
    void input()
    {
        cin>>b;
    }
    void show()
    {
        cout<<b;
    }
};
class multiple : public A,public B
{
    int final;
    public:
    void input()
    {
        A::input();
        B::input();
        cin>>final;
    }
    void show()
    {
        A::show();
        B::show();
        cout<<final;
    }
};
int main()
{
    multiple bin;
    bin.input();
    bin.show();
}