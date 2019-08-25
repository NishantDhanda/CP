// values at upper bound and lower bound
#include<iostream>
#include<vector>
#include<algorithm>
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a,b,n,i,j,k,l;
    vector<int> v;

    cout<<"No of elements?\n";
    cin>>n;

    for(i=0;i<n;i++)
    {
        cin>>a;
        v.push_back(a);
    }
    for(i=0;i<v.size();i++)
    {
        cout<<v[i]<<endl;
    }

    cout<<endl<<endl;

    sort(v.begin(),v.end());

     for(i=0;i<v.size();i++)
    {
        cout<<v[i]<<endl;
    }
    cout<<endl<<endl;

    cout<<"Number \n";
    cin>>k;

    int x,z;

    z=*upper_bound(v.begin(),v.end(),k);
    x=*lower_bound(v.begin(),v.end(),k);

    cout<<z<<endl;
    cout<<x<<endl;

}

