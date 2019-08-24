// Binary Search

#include<iostream>
#include<algorithm>
using namespace std;

int binarysearch(int *a,int ft,int ed,int x)
{
    int mid;
    mid=(ft+ed)/2;
    if(ft>ed)
    {
        cout<<"Not found\n";
        return 0;
    }
    else if(a[mid]==x)
    {
        cout<<"Found \n";
    }
    else if(a[mid]>x)
    {
        int v=mid-1;
        binarysearch(a,ft,v,x);
    }
    else if(a[mid]<x)
    {
        int v=mid+1;
        binarysearch(a,v,ed,x);
    }
}


int main()
{
    int a[100];
    int n,i,x,front_=0,end_;
    cout<<"n?\n";
    cin>>n;
    end_=n-1;
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    sort(a,a+n);
    cout<<"Element?\n";
    cin>>x;
    binarysearch(a,front_,end_,x);
}
