// inbuilt sort function descending when size of array known
#include<iostream>
#include<algorithm>
using namespace std;

bool comp(int a,int b)                                    // boolean function returns true or false
{
    return a>b;                                           // return(b>a)  for ascending order
}


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
    sort(a,a+n,comp);                                     // comp function passed in sort function, not called
    cout<<"After sorting\n";
    for( i=0;i<n;i++)
    {
        cout<<a[i]<<endl;
    }

}

