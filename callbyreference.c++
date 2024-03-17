#include<iostream>
#include<string>
using namespace std;
void swap(int *a,int *b)
{
    int tmp=*a;
    *a=*b;
    *b=tmp;
}
int main()
{
    int x,y;
    cout<<"Enter the valus of x and y:"<<endl;
    cin>>x>>y;
    cout<<"The value of x and y before Swapping are:"<<endl;
    cout<<"X:"<<x<<endl;
    cout<<"Y:"<<y<<endl;
    swap(&x,&y);
    cout<<"The value of x and y after Swapping are:"<<endl;
    cout<<"X:"<<x<<endl;
    cout<<"Y:"<<y<<endl;

    return 0;
}