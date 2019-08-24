// inbuilt sort function when size of array known
#include<iostream>
#include<algorithm>
using namespace std;

int main()
{
    int a[100];
    int n,i;
    cout<<"n?\n";
    cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    for( i=0;i<n;i++)
    {
        cout<<a[i]<<endl;
    }
    sort(a,a+n);
    cout<<"After sorting\n";
    for( i=0;i<n;i++)
    {
        cout<<a[i]<<endl;
    }

}
