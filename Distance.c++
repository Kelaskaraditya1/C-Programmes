#include<iostream>
#include<bits/stdc++.h>
using namespace std;
class Point
{
    public:
    int x,y;
     static double distance(Point p1,Point p2)
    {
        int dist1=pow((p2.x-p1.x),2);
        int dist2=pow((p2.y-p1.y),2);
        double distance=pow((dist1+dist2),0.5);
        return distance;
    }
};
int main()
{
    int angle;
    cout<<sin(angle);
    Point p1 = Point();
    Point p2 = Point();
    cout<<"Enter the co-ordinate of 1 st point"<<endl;
    cin>>p1.x>>p1.y;
    cout<<"Enter the co-ordinate of 2 nd point"<<endl;
    cin>>p2.x>>p2.y;
    cout<<"The distance between the two points is "<<Point::distance(p1,p2);
    return 0;
}