#include<iostream>
#include<string>
using namespace std;
int main()
{
    int length,n,i,j,counter=0;
    char str[200];
    cout<<"Enter the length of the String"<<endl;
    cin>>length;
    n=length-1;
    cout<<"Enter the String"<<endl;
    for(int i=0;i<length;i++)
    cin>>str[i];
    if((n%2)==0)
    {
        for(i=0,j=n;((i<n/2)&&(j>n/2));i++,j--)
        {
            if(str[i]!=str[j])
            {
            cout<<"The entered String is not palindrome"<<endl;
            break;
            }
            else
            counter++;
        }
        if(counter==((n/2)-1));
        cout<<"The entered String is Palindrome"<<endl;
    }
    else
    {
        for(i=0,j=n;((i<=(n/2))&&(j>(n/2)));i++,j--)
        {
            if(str[i]!=str[j])
            {
            cout<<"The entered String is not Palindrome"<<endl;
            break;
            }
            else
            counter++;
        }
        if(counter==(n/2))
        cout<<"The entered String is Palindrome"<<endl;

    }
    return 0;
}