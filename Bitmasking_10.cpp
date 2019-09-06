// array contains 2 nos that are not repeated, else all are, find 2 numbers
/* logic is to xor all numbers of that array and find the first set bit from the right
 and put all elements having that bit as set bit in other array and xor them all to find one number*/


#include<iostream>
#include<bits/stdc++.h>
using namespace std;

void findunique(int *a,int n)
{
    int x=0;
    for(int i=0;i<n;i++)
    {
        x=x^a[i];
    }
    int y=x;
    int it=0;
    while(y>0)
    {
        if(y&1==1)
        {
            break;
        }
        it++;
        y=y>>1;
    }
    int b[100],j=0;
    for(int i=0;i<n;i++)
    {
        int q=a[i];
        q=q>>it;
        if(q&1==1)
        {
            b[j]=a[i];
            j++;
        }
    }
    int x2=0;
    for(int i=0;i<j;i++)
    {
        x2=x2^b[i];
    }
    x=x^x2;

    cout<<"Number is "<<x2<<" and "<<x<<endl;
}


int main()
{
    int n,a[100],i,j,k;
    cout<<"Numbers?\n";
    cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    findunique(a,n);
}
