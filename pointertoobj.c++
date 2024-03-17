#include<iostream>
using namespace std;
class Student
{
    public:
    string name,sid;
    int rollno;
    char div;
    void display()
    {
        cout<<endl;
        cout<<"The Student id of the Student is:"<<sid<<endl;
        cout<<"The Name of the Student is:"<<name<<endl;
        cout<<"The rollno of the Student is:"<<rollno<<endl;
        cout<<"The Div of the Student is:"<<div<<endl;
        cout<<endl;
    }
    Student(string ssid,string sname,int roll_no,char sdiv)
    {
        sid=ssid;
        name=sname;
        rollno=roll_no;
        div=sdiv;
    }
};
int main()
{
    //without new keyword.
    Student s1 = Student("2021FHCO042","Aditya",54,'A');
    Student *ptr1 =&s1;
    ptr1->display();
    //with new keyword.
    Student *ptr2 = new Student("2021FHCO044","Mayur",56,'A');
    ptr2->display();
    return 0;
}