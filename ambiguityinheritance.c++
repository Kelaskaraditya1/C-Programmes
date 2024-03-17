#include<iostream>
using namespace std;
class Parent1
{
    public:
    void method()
    {
        cout<<"I am Ironman\n";
    }
};
class Parent2
{
    public:
    void method()
    {
        cout<<"I am Batman\n";
    }
};
class Child:public Parent1,public Parent2
{
    public:
    void method()
    {
        Parent1::method();
        cout<<endl;
        Parent2::method();
        cout<<endl;
    }
};
int main()
{
    Child obj;
    obj.method();
    return 0;
}