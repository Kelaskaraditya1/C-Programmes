#include<iostream>
#include<bits/stdc++.h>
using namespace std;
class Polygon
{
    public:
    int dimensions;
    int area()
    {
        int area;
        return area;
    }
    int perimeter()
    {
        int perimeter;
        return perimeter;
    }
    void display()
    {
        cout<<"The Area of the Triangle is:"<<area();
        cout<<"The Perimeter of the Triangle:"<<perimeter();

    }
};
class Circle: public Polygon
{
    public:
    int radius;
    float area()
    {
        return 3.142*pow(radius,2);
    }
    float perimeter()
    {
        return 2*3.142*radius;
    }
    Circle(int rad)
    {
        radius=rad;
    }
    void display()
    {
        cout<<"The Area of the Circle is:"<<area()<<endl;
        cout<<"The Perimeter of the Circle:"<<perimeter()<<endl;

    }
};
class Triangle: public Polygon
{
    public:
    int base,height;
    float area()
    {
        return 0.5*base*height; 
    }
    int perimeter()
    {
        return (2*base+height);
    }
    void display()
    {
        cout<<"The Area of the Triangle is:"<<area()<<endl;
        cout<<"The Perimeter of the Triangle is:"<<perimeter()<<endl;
    }
    Triangle(int b,int h)
    {
        base=b;
        height=h;
    }
    
};
class Etriangle: public Triangle
{
    public:
    int side;
    float area()
    {
        return 0.43301*pow(side,2);
    }
    int perimeter()
    {
        return 3*side;
    }
    void display()
    {
        cout<<"The Area of the triangle is:"<<area()<<endl;
        cout<<"The Perimeter of the Triangle is:"<<perimeter()<<endl;
    }
    Etriangle(int s,int b,int h):Triangle(b,h)
    {
        side=s;
    }
};
int main()
{
    Etriangle e = Etriangle(10,10,10);
    e.display();
    cout<<endl;
    Circle c = Circle(10);
    c.display();
    return 0;
}
