// Using vectors and its functions

#include<vector>
#include<iostream>
using namespace std;
int main()
{
    int n,m,j,k,i;

    vector<int> a;
    a.reserve(8);                       // it reserves memory for 8 int elements and when size exceeds it will double itself from 8 to 16 then 32 etc.
    cout<<"Number of elements?\n";
    cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>m;
        a.push_back(m);
    }
    cout<<"n is "<<n<<endl;
    j=a.capacity();
    cout<<"capacity is "<<j<<endl;
    k=a.size();
    cout<<"size is "<<k<<endl;

    for(i=0;i<a.size();i++)
    {
        cout<<a[i]<<endl;
    }

    a.pop_back();
    a.pop_back();
    cout<<"After removing last 2 elements";
    cout<<"n is "<<n<<endl;
    j=a.capacity();
    cout<<"capacity is "<<j<<endl;
    k=a.size();
    cout<<"size is "<<k<<endl;

    for(i=0;i<a.size();i++)
    {
        cout<<a[i]<<endl;
    }

    a.clear();

}
