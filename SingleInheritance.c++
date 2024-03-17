#include<iostream>
#include<bits/stdc++.h>
using namespace std;

class Triangle
{
    public:
    int base,height;
    int area(int base,int height)
    {
        return base*height;
    }
    int perimeter(int base,int height)
    {
        return (2*base+height);
    }
        void display()
    {
        cout<<endl;
        cout<<"The Area of the Triangle is:"<<area(base,height)<<endl;
        cout<<"The perimeter of the Triangle is:"<<perimeter(base,height)<<endl;
        cout<<endl;
    }
    Triangle(int tbase,int theight)
    {
        base=tbase;
        height=theight;
    }
};
class ETriangle : public Triangle
{
    public:
    int side;
    int area(int side)
    {
        return 0.43301*pow(side,2);
    }
    int perimeter(int side)
    {
        return 3*side;
    }
    void display()
    {
        cout<<endl;
        cout<<"The Area of the Triangel is:"<<area(side)<<endl;
        cout<<"The Perimeter of the Triangle is:"<<perimeter(side)<<endl;
        cout<<endl;
    }
    ETriangle(int base,int height,int tside):Triangle(base,height)
    {
        side=tside;
    }
};
int main()
{
    // Triangle t = Triangle(10,10);
    // t.display();
    ETriangle e = ETriangle(10,10,10);
    e.display();
    return 0;
}