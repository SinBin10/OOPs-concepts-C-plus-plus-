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
class B : public A
{
    int b;
    public:
    void input()
    {
        A::input();
        cin>>b;
    }
    void show()
    {
        A::show();
        cout<<b;
    }
};
class multiple : public B
{
    int final;
    public:
    void input()
    {
        B::input();
        cin>>final;
    }
    void show()
    {
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