#include<iostream>
#include<bits/stdc++.h>
using namespace std;
class Polygon
{
    public:
    int dimension;
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
};
class Triangle 
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
};
class Etriangle : public Triangle,public Polygon
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
        cout<<"The Area of the Triangle is:"<<area()<<endl;
        cout<<"The Perimeter of the Triangle is:"<<perimeter()<<endl;
    }
    Etriangle(int s)
    {
        side=s;
    }
};
int main()
{
    Etriangle e = Etriangle(10);
    e.display();
    return 0;
}