#include<iostream>
#include<bits/stdc++.h>
using namespace std;
// Nonparameterised Cunstructors.
class Polygon
{
    public:
    int length,bredth,radius;
    int area(int length,int bredth)
    {
        return length*bredth;
    }
    int perimeter(int length,int bredth)
    {
        return 2*(length+bredth);
    }
    double perimeter(int radius)
    {
        return 2*3.142*radius;
    }
    double area(int radius)
    {
        return 3.142*pow(radius,2);
    }
    void display()
    {
        cout<<endl;
        cout<<"The Area of the Rectangle is:"<<area(length,bredth)<<endl;
        cout<<"The perimeter of the Rectangle is:"<<perimeter(length,bredth)<<endl;
        cout<<endl;
        cout<<"The Area of the Circle is:"<<area(radius)<<endl;
        cout<<"The perimeter of the Circle is:"<<perimeter(radius)<<endl;
        cout<<endl;
    }
    Polygon()
    {
        length=10;
        bredth=20;
        radius=100;
    }
};

// Parameterised Cunstructors
class Student
{
    public:
    string name,sid,cast;
    char div;
    void fees()
    {
        cout<<endl;
        cout<<"The Fees for General category is: 1 lakh"<<endl;
        cout<<"The Fees for OBC category is: 50 k"<<endl;
        cout<<"The Fees for Sc category is: 13k"<<endl;
        cout<<"The Sees for Nt category is: 3k"<<endl;
        cout<<endl;
    }
    void display()
    {
        cout<<endl;
        cout<<"The name of the Student is:"<<name<<endl;
        cout<<"The Student id of the Student is:"<<sid<<endl;
        cout<<"The Division of the Student is:"<<div<<endl;
        cout<<"The cast of the Student is:"<<cast<<endl;
        cout<<endl;
    }
    Student(string sname,string ssid,string scast,char sdiv)
    {
        name=sname;
        sid=ssid;
        cast=scast;
        div=sdiv;
    }
};
int main()
{
    Polygon p;
    p.display();
    Student s = Student("Aditya","2021FHCO042","OBC",'A');
    s.display();
    s.fees();
    return 0;
}