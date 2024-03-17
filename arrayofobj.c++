#include<iostream>
using namespace std;
class Student
{
    public:
    string name,sid,cast;
    int rollno,fees;
    char div;
    void display()
    {
        cout<<"The student id of the Student is:"<<sid<<endl;
        cout<<"The name of the Student is:"<<name<<endl;
        cout<<"The rollno of the Student is:"<<rollno<<endl;
        cout<<"The div of the Student is:"<<div<<endl;
        cout<<"The cast of the Student is:"<<cast<<endl;
        cout<<"The Fees to be paid by the Student is:"<<fees<<endl;
    }
};
int main()
{
    cout<<"Enter the number of Students"<<endl;
    int n;
    cin>>n;
      Student s[n];
      cout<<"Enter the information of the Students"<<endl;
    for(int i=0;i<n;i++ )
    {
        cout<<"Enter the Student id of the Student"<<endl;
        cin>>s[i].sid;
        cout<<"Enter the name of the Student"<<endl;
        cin>>s[i].name;
        cout<<"Enter the rollno of the Student"<<endl;
        cin>>s[i].rollno;
        cout<<"Enter the division of the Student"<<endl;
        cin>>s[i].div;
        cout<<"Enter the cast of the Student"<<endl;
        cin>>s[i].cast;
        cout<<"Enter the fees to be paid by the Student"<<endl;
        cin>>s[i].fees;
        cout<<endl;
    }
    for(int i=0;i<n;i++)
    {
        s[i].display();
        cout<<endl;
    }
    return 0;
}