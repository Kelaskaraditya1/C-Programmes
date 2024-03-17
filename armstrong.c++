#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int no,sum,rem;
    cout<<"Enter the number"<<endl;
    cin>>no;
    int n=no;
    while(no!=0)
    {
        rem=no%10;
        cout<<rem;
        sum=sum+pow(rem,3);
        no=no/10;
    }
    if(sum==n)
    cout<<"Number is Armstrong"<<endl;
    else
    cout<<"Number is not Armstrong"<<endl;
}