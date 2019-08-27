// you are given list of numbers and every number is present twice except one number. Find that unique number
#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
        {
            int a[100],i,j=0,n;
            cout<<"Numbers?\n";
            cin>>n;
            for(i=0;i<n;i++)
            {
                cin>>a[i];
            }
            for(i=0;i<n;i++)
            {
                cout<<a[i]<<endl;
            }

            for(i=0;i<n;i++)
            {
                j=j^a[i];
            }
            cout<<"Unique number is "<<j<<endl;

        }
