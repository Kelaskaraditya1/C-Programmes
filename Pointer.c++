#include<iostream>
#include<string>
using namespace std;
int main()
{
    int a,*ptr,b;
    cout<<"Enter the value of a"<<endl;
    cin>>a;
    ptr=&a;
    b=*ptr;
    cout<<"The value at b is:"<<b<<endl;
    int *ptr1,*ptr2,c,d;
    cout<<"Enter the value of c"<<endl;
    cin>>c;
    ptr1=&c;
    ptr2=ptr1;
    d=*ptr2;
    cout<<"The value of d is:"<<d<<endl;
    return 0;
}