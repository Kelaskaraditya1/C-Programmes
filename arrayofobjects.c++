#include<iostream>
using namespace std;
class Student
{
    public:
    string name,sid;
    int rollno;
    char div;
    void getinfo()
    {
        cout<<endl;
        cout<<"Enter the student id of the student"<<endl;
        cin>>sid;
        cout<<"Enter the Name of the Student"<<endl;
        cin>>name;
        cout<<"Enter the rollno of the Student"<<endl;
        cin>>rollno;
        cout<<"Enter the Division of the Student"<<endl;
        cin>>div;
        cout<<endl;
    }
    void display()
    {
        cout<<endl;
        cout<<"The Student id of the Student is:"<<sid<<endl;
        cout<<"The Name of the Student is:"<<name<<endl;
        cout<<"The rollno of the Student is:"<<rollno<<endl;
        cout<<"The division of the Student is:"<<div<<endl;
        cout<<endl;
    }
};
int main()
{
    Student *s = new Student[3];
    for(int i=0;i<3;i++)
    s[i].getinfo();
    Student *ptr=s;
    for(int i=0;i<3;i++)
    {
    ptr->display();
    ptr++;
    }
    return 0;
}