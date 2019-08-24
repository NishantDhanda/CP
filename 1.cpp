// inbuilt sort function when size of array not known

#include<iostream>
#include<algorithm>
using namespace std;

int main()
{
    int a[]={1,4,2,6,4,8,3,0};
    int n;
    n=sizeof(a)/sizeof(int);                   //or sizeof(a)/sizeof(a[0])
    for(int i=0;i<n;i++)
    {
        cout<<a[i]<<endl;
    }
    sort(a,a+n);
    cout<<"After sorting\n";
    for(int i=0;i<n;i++)
    {
        cout<<a[i]<<endl;
    }

}
