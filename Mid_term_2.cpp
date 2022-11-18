#include<iostream>
using namespace std;
class student
{
    char name[50];
    public:
    void input()
    {
        cout<<"Enter the name of the student : ";
        gets(name);
    }
    void show()
    {
        cout<<name<<endl;
    }
};
class account : public student
{
    int fees;
    public:
    void input()
    {
        student::input();
        cout<<"Enter the fees left : ";
        cin>>fees;
    }
    void show()
    {
        student::show();
        cout<<"The fees left : "<<fees;
    }
};
int main()
{
    account a;
    a.input();
    a.show();
    return 0;
}
