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
        cout<<"The name of the Student is:"<<name<<endl;
        cout<<"The rollno of the Student is:"<<rollno<<endl;
        cout<<"The division of the Student is:"<<div<<endl;
        cout<<endl;
    }
    void feesstructure()
    {
        cout<<endl;
        cout<<"The Fees of General category Student is 1 Lakh"<<endl;
        cout<<"The Fees of Obc Category Student is 50 k"<<endl;
        cout<<"The Fees of Sc category Student is 13 k"<<endl;
        cout<<"The Fees of Nt category Student is 3 k"<<endl;
        cout<<endl;
    }
    Student(string sname,string ssid,int srollno,char sdiv)
    {
        name=sname;
        sid=ssid;
        rollno=srollno;
        div=sdiv;   
    }
    // Student(Student &s)
    // {
    //     name=s.name;k
    //     sid=s.sid;
    //     rollno=s.rollno;
    //     div=s.div;
    // }
};
int main()
{
    Student s1 = Student("Aditya","2021FHCO042",54,'A');
    // Student s2 = s1;
    cout<<endl;
    s1.display();
    cout<<endl;
    // s2.display();
    return 0;
}