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
            l=l1;
            h=mid-1;
            mid=(l+h)/2;
            if(A[mid]==key)
            return mid;
        }
        else
        {
            l=mid+1;
            h=h1;
            mid=(l+h)/2;
            if(A[mid]==key)
            return mid;
        }
    }
}
}
int main()
{
    int A[]={10,20,30,40,50,60,70,80,90,100};
    int position=binarysearch(A,0,9,60);
    printf("%d\n",position);
    return 0;
}