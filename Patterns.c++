#include<iostream>
using namespace std;
int main()
{
    int count=1;
    for(int i=0;i<4;i++)
    {
        for(int j=0;j<4-i;j++)
        cout<<" ";
        for(int k=0;k<=i;k++)
        cout<<count++;
        count=1;
        cout<<endl;
        for(int j=0;j<i+1;j++)
        {
            count=count+i-1;
            cout<<count;
        }
        cout<<endl;
    }
    return 0;
}