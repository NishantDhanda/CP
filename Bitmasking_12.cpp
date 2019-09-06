/* Array has all nos. repeated 3 times except one number. Find that unique no*/

/* we will take one array and add all bit by bit of all number and store that in particular index of taken array and then we will do %3 to all elements*/


#include<iostream>
#include<bits/stdc++.h>
using namespace std;

void findunique(int *a,int n)
{
    int i,b[100],j;
    for(i=0;i<100;i++)
    {
        b[i]=0;
    }
    for(i=0;i<n;i++)
    {
        j=0;
        int x=a[i];
        while(x>0)
        {
            int u=x&1;
            b[j]=b[j]+u;
            j++;
            x=x>>1;
        }

    }
    for(i=0;i<100;i++)
    {
        b[i]=b[i]%3;
    }

    int t=1,ans=0;

    for(i=0;i<100;i++)
    {
        ans=ans+t*b[i];
        t=t*2;
    }

    cout<<"unique number is "<<ans<<endl;
}

int main()
{
    int n,a[100];
    cout<<"Enter n\n";
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    findunique(a,n);
}
