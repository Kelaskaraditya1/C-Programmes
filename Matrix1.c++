#include<iostream>
#include<string>
using namespace std;
int main()
{
    int A[10][10],B[10][10],C[10][10],r,c,i,j;
    cout<<"Enter the rows and columns of the matrices"<<endl;
    cin>>r>>c;
    cout<<"Enter the elements of the 1 st Matrix"<<endl;
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
            cin>>A[i][j];
    }
    cout<<"Enter the elements of the 2 nd Matrix"<<endl;
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
            cin>>B[i][j];
    }
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        C[i][j]=A[i][j]+B[i][j];
    }
    cout<<"The Sum of both the matrices is:"<<endl;
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        cout<<C[i][j]<<"\t";
    }
}
