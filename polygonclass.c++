#include<iostream>
#include<string>
using namespace std;
class Polygon
{
    public:
    int length,bredth,radius;
    float perimeter,area;
    int Rperimeter()
    {
        return 2*(length+bredth);
    }
    int Rarea()
    {
        return length*bredth;
    }
    float Cperimeter()
    {
        return 2*3.142*radius;
    }
    float Carea()
    {
        return 3.142*radius*radius;
    }
};
int main()
{
    Polygon R = Polygon();
    Polygon C = Polygon();
    cout<<"Enter the length and bredth of the rectangle"<<endl;
    cin>>R.length>>R.bredth;
    cout<<"Enter the radius of circle"<<endl;
    cin>>C.radius;
    cout<<"The Perimeter of the Rectangle is: "<<R.Rperimeter()<<endl;
     cout<<"The Area of the Rectangle is: "<<R.Rarea()<<endl;
      cout<<"The Perimeter of the Circle is: "<<R.Cperimeter()<<endl;
       cout<<"The Area of the Circle is: "<<R.Cperimeter()<<endl;
    return 0;
}