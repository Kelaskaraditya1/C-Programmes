#include<iostream>
using namespace std;
class Student
{
    public:
    string name,sid,cast;
    int rollno;
    char div;
    static int count;
    void display()
    {
        cout<<endl;
        cout<<"The name of the Student is:"<<name<<endl;
        cout<<"The Student ID is:"<<sid<<endl;
        cout<<"The rollno of the Student is:"<<rollno<<endl;
        cout<<"The division of the Student is:"<<div<<endl;
        cout<<"The cast of the Student is:"<<cast<<endl;
        cout<<"The sutend is "<<++count<<" to register"<<endl;
        cout<<endl;
        feesstructure();
    }
    static void feesstructure()
    {
        cout<<"The fees for open category Students is: 1 lakh"<<endl;
        cout<<"The fees for obc category Students is: 50 K"<<endl;
        cout<<"The fees for SC category Students is: 13 k"<<endl;
        cout<<"The fees for NT category Students is: 3 K"<<endl;
    }
};
int Student::count=0;
int main()
{
    int no;
    cout<<"Enter the no of Students"<<endl;
    cin>>no;
    Student s[no];
    for(int i=0;i<no;i++)
    {
        cout<<endl;
        cout<<"Enter the information of the Students"<<endl;
         cout<<"Enter the Student id of the Student"<<endl;
        cin>>s[i].sid;
        cout<<"Enter the name of the Student"<<endl;
        cin>>s[i].name;
        cout<<"Enter the roll no of the Student"<<endl;
        cin>>s[i].rollno;
        cout<<"Enter the Division of the Student"<<endl;
        cin>>s[i].div;
        cout<<"Enter the Cast of the Student"<<endl;
        cin>>s[i].cast;
    }
    for(int i=0;i<no;i++)
    s[i].display();
    Student::feesstructure();
    return 0;
}