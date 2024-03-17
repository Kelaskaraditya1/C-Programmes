#include<iostream>
#include<String>
using namespace std;
void swap(int x,int y)
{
    int tmp=x;
    x=y;
    y=tmp;
}
int main()
{
    int x,y;
    cout<<"Enter the value of x and y"<<endl;
    cin>>x>>y;
    cout<<"Before Swapping value of x and y are:"<<endl;
    cout<<"X:"<<x<<endl;
    cout<<"Y:"<<y<<endl;
    swap(x,y);
    cout<<"The value of x and y after Swapping:"<<endl;
    cout<<"X:"<<x<<endl;
    cout<<"Y:"<<y<<endl;
    return 0;
}