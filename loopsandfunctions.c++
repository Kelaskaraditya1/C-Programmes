#include<iostream>
#include<string>
using namespace std;
int binaryno(int n,int no[])
{
    int counter=0;
    for(int i=0;i<n;i++)
    {
        if((no[i]!=0)&&(no[i]!=1))
        {
        return 0;
        break;
        }
        else
        counter++;
    }
    if(counter==n)
    return 1;

}
int main()
{
    int n,no[20],counter=0;
    cout<<"Enter the length of the binary no"<<endl;
    cin>>n;
    cout<<"Enter the Binary number"<<endl;
    for(int i=0;i<n;i++)
    cin>>no[i];
    // for(int i=0;i<n;i++)
    // {
    //     if((no[i]!=0)&&(no[i]!=1))
    //     {
            
    //         cout<<"The entered number is not Binary"<<endl;
    //           break;
    //     }
    //     else
    //     counter++;
    // }
    // if(counter==n)
    // cout<<"The entered number is Binary"<<endl;
    int k=binaryno(n,no);
    if(k==1)
    cout<<"The entered number is Binary form"<<endl;
    else
    cout<<"The entered number is not in Binary form"<<endl;
}