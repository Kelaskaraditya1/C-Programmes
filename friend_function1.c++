#include<iostream>
using namespace std;
class Main
{
    int a,b;
    public:
    void setdata(int a1,int b1)
    {
        a=a1;
        b=b1;
    }
    void getdata()
    {
        cout<<"The value of a is:"<<a<<endl;
        cout<<"The value of b is:"<<b<<endl;
    }
    friend int sum(int a,int b);
};
int sum(int a,int b)
{
    return a+b;
}
int main()
{
    Main m = Main();
    cout<<"Enter the value of a and b"<<endl;
    int a,b;
    cin>>a>>b;
    m.setdata(a,b);
    m.getdata();
    int add=sum(a,b);
    cout<<"THe sum of a and b is:"<<add;
    return 0;
}