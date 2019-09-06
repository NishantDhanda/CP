// Person can make jumps in levels 2^n. Another person standing on level N,Find minimum jumps

//No of set bits in N would be minimum number of jumps

#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i,no=0;
    cout<<"Enter N\n";
    cin>>n;
    while(n>0)
    {
        if(n&1==1)
        {
            no++;
        }
        n=n>>1;
    }

    cout<<"Minimum jumps would be "<<no<<endl;
}
