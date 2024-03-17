#include<iostream>
#include<string>
using namespace std;
struct student
{
    string name,sid;
    int rollno;
    char div;
}student[3];
void display(struct student array[])
{
    for(int i=0;i<3;i++)
    {
        cout<<"The Student id of the Student is:"<<array[i].sid<<endl;
        cout<<"The name of the Student is:"<<array[i].name<<endl;
        cout<<"The rollno of the Student is:"<<array[i].rollno<<endl;
        cout<<"The div of the Student is:"<<array[i].div<<endl;
        cout<<"\n";
    }
}
int main()
{
    for(int i=0;i<3;i++)
    {
        cout<<"Enter the information of "<<i+1<<" Studen"<<endl;
        cout<<"Enter the student id of Student"<<endl;
        cin>>student[i].sid;
        cout<<"Enter the name of the Student"<<endl;
        cin>>student[i].name;
        cout<<"Enter the rollno of the Student"<<endl;
        cin>>student[i].rollno;
        cout<<"Enter the div of the Student"<<endl;
        cin>>student[i].div;
    }
    display(student);
    return 0;
}