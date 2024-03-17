#include<iostream>
#include<string>
using namespace std;
int main()
{
    int A[10][10],B[10][10],C[10][10],i,j,c,r,k,sum=0;
    cout<<"Enter the no of rows and columns of matrices"<<endl;
    cin>>r>>c;
    cout<<"Enter the elements of 1 st matrix"<<endl;
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        cin>>A[i][j];
    }
    cout<<"Enter the elements of 2 nd elements"<<endl;
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        cin>>B[i][j];
    }
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            for(k=0;k<r;k++)
            sum=sum+A[i][k]*B[k][j];
            C[i][j]=sum;
        }
    }
    cout<<"The product of both the matrices is:"<<endl;
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        cout<<C[i][j]<<"\t";
    }
    return 0;
}