#include<iostream>
#include<string>
using namespace std;
class Binary
{
    public:
    int checkbinary(int no[],int n)
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
        if(counter==n);
        return 1;
    }
    void onescomp(int n,int no[])
    {
        if(checkbinary(no,n))
        {
        for(int i=0;i<n;i++)
        {
            if(no[i]==1)
            no[i]=0;
            else
            no[i]=1;
        }
        }
        else
        cout<<"The entered number is not Binary"<<endl;
        for(int i=0;i<n;i++)
        cout<<no[i]<<"\t";
    }
};
int main()
{
    int no[200],n;
    Binary B=Binary();
    cout<<"Enter the length of Binary number"<<endl;
    cin>>n;
    cout<<"Enter the number"<<endl;
    for(int i=0;i<n;i++)
    cin>>no[i];
    int k=B.checkbinary(no,n);
    if(k==1)
    cout<<"The Entered number is Binary"<<endl;
    else
    cout<<"The entered number is not Binary"<<endl;
    B.onescomp(n,no);
    return 0;
}