#include<iostream>
using namespace std;
class Student
{
    public:
    string name,sid;
    int rollno;
    char div;
    void studentinfo()
    {
        cout<<endl;
        cout<<"The Student id of the Student is:"<<sid<<endl;
        cout<<"The Name of the Student is:"<<name<<endl;
        cout<<"The Rollno of the Student is:"<<rollno<<endl;
        cout<<"The Division of the Student is:"<<div<<endl;
        cout<<endl;
    }
};
class Academics:virtual public Student
{
    public:
    int physics,math,chemistry;
    void displaymarks()
    {
        cout<<"The marks of the Student in Math are:"<<math<<endl;
        cout<<"The marks of the Student in Chemistry are:"<<chemistry<<endl;
        cout<<"The marks of the Student in Physics are:"<<physics<<endl;
    }
    
};
class Sports:virtual public Student
{
    public:
    int score;
    void displayscore()
    {
        cout<<"The average score of the Student from different sports are:"<<score<<endl;
    }
};
class Result:public Academics,public Sports
{
    public:
    int fc;
    float fp;
     int finalmarks()
     {
        fc=physics+math+chemistry+score;
        return fc;
     }
     float finalpercentage()
     {
        fp=(finalmarks()*100)/350;
        return fp;
     }
     void finaldisp()
     {
        displaymarks();
        studentinfo();
        displayscore();
        cout<<"The final marks of the Student in this sem are:"<<finalmarks()<<endl;
        cout<<"The Final Percentage of the Student is this sem are:"<<finalpercentage()<<endl;
     }
    
     Result(string sname,string ssid,int srollno,char sdiv,int phy,int chem,int maths,int sc)
     {
        name=sname;
        sid=ssid;
        rollno= srollno;
        div=sdiv;
        physics=phy;
        chemistry=chem;
        math=maths;
        score=sc;
        finaldisp();
     }
};
int main()
{
    Result r = Result("Aditya","2021FHCO042",54,'A',85,86,100,10);
    return 0; 
}