#include<iostream>
using namespace std;
int binarysearch(int A[],int l1,int h1,int key)
{
    int l=l1,h=h1;
    int mid=(l+h)/2;
    if(A[mid]==key)
    return mid;
    else
    {
        while(A[mid]!=key)
        {
            if(key<A[mid])
            {
                l=0,h=mid-1;
                mid=(l+h)/2;
                if(A[mid]==key)
                return mid;
            }
            else
            {
                l=mid+1,h=h1;
                mid=(l+h)/2;
                if(A[mid]==key)
                return mid;
            }
        }
    }
}
int main()
{
    int n;
    int *key = new int (60);
    int *A = new int [200];
    cout<<"Enter the no of elements\n";
    cin>>n;
    cout<<"Enter the elements\n";
    for(int i=0;i<n;i++)
    cin>>A[i];
    for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if(A[j]<A[i])
            {
                int tmp=A[i];
                A[i]=A[j];
                A[j]=tmp;
            }
        }
    }
    int position=binarysearch(A,0,9,*key);
    cout<<"The key is found at "<<position<<" in the list\n";
    delete key,A;
    return 0;
}
