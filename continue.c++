#include<iostream>
#include<string>
using namespace std;
int main()
{
    int i,n,m;
    cout<<"For continue Statement"<<endl;
    cout<<"Enter the value of n"<<endl;
    cin>>n;
    for(i=0;i<n;i++)
    {
        if(i==7)
        continue;
        else
        cout<<i<<endl;
    }
    cout<<endl;
    cout<<"For break Statement"<<endl;
    cout<<"Enter the valuéof m"<<endl;
    cin>>m;
    for(i=0;i<m;i++)
    {
        if(i==7)
        {
            cout<<"Akela hi kafi hu"<<endl;
            break;
        }
        else
        cout<<i<<endl;
    }
    return 0;
}