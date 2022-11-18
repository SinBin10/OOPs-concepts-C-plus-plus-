#include <iostream>
using namespace std;
class Student
{
    float fee;
    char sname[50];
    public :
    void input()
    {
        cout<<"Enter the name of student : ";
        gets(sname);
        cout<<"Enter Fee : ";
        cin>>fee;
    }
    void show()
    {
        cout<<"Student name : "<<sname;
        cout<<"Fees is : "<<fee;
    }
};
class department : public Student 
{
    int dno;
    public :
    void input ()
    {
        Student :: input();
        cout<<"Enter department no : ";
        cin>>dno;
    }
    void show()
    {
        Student :: show();
        cout<<"in dno no : "<<dno;
    }
};
int main()
{
    department d1;
    d1.input();
    d1.show();
    return 0;
}