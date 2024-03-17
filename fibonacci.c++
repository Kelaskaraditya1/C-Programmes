#include<iostream>
#include<string>
using namespace std;
int fib(int n)
{
    if(n==1)
    return 0;
    if(n==2)
    return 1;
    if(n>2)
    return fib(n-1)+fib(n-2);
}
int main()
{
    int n,a=0,b=1,c;
    cout<<"Enter the no of terms to be obtained\n";
    cin>>n;
//     cout<<a<<"\n";
//     cout<<b<<"\n";
//     for(int i=3;i<=n;i++)
// {
//     c=a+b;
//     cout<<c<<endl;
//     a=b;
//     b=c;
// }
cout<<"Fibonacci series using Recurrsionis:"<<endl;
for(int i=1;i<=n;i++)
cout<<fib(i)<<endl;
    return 0;
}