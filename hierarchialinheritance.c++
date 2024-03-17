#include<iostream>
#include<bits/stdc++.h>
using namespace std;
class Polygon
{
    public:
    int dimensions;
    double area()
    {
        double area;
        return area;
    }
    double perimeter()
    {
        double perimeter;
        return perimeter;
    }
    void display()
    {
        cout<<endl;
        cout<<"The Area is:"<<area()<<endl;
        cout<<"The Perimeter is:"<<perimeter()<<endl;
        cout<<endl;
    }
};
class Circle : public Polygon
{
    public:
    int radius;
    double area()
    {
        double area=3.142*pow(radius,2);
        return area;
    }
    double perimeter()
    {
        double perimeter=2*3.142*radius;
        return perimeter;
    }
    Circle(int rad)
    {
        radius=rad;
        display();
    }
};
class Triangle : public Polygon
{
    public:
    int base,height;
    double area()
    {
        double area=0.5*base*height;
        return area;
    }
    double perimeter()
    {
        double perimeter=2*base*height;
        return perimeter;
    }
    Triangle(int b,int h)
    {
        base=b;
        height=h;
        display();
    }
};
class Rectangle : public Polygon
{
    public:
    int length,bredth;
    int area()
    {
        int area=length*bredth;
        return area;
    }
    int perimeter()
    {
        int perimeter=2*(length+bredth);
        return perimeter;
    }
    Rectangle(int l,int b)
    {
        length=l;
        bredth=b;
        display();
    }
};
int main()
{
    Circle c = Circle(10);
    Triangle t = Triangle(10,10);
    Rectangle r = Rectangle(10,10);
    return 0;
}