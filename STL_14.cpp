// using upper and lower bound functions in vectors.

#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
int main()
{
    int i,j,k,n,m,no;
    vector<int> a;
    cout<<"Number of elements?\n";
    cin>>n;

    for(i=0;i<n;i++)
    {
        cin>>m;
        a.push_back(m);
    }
    sort(a.begin(),a.end());
    for(i=0;i<a.size();i++)
    {
        cout<<a[i]<<endl;
    }

    // finding upper bound

    cout<<"Enter number for upper and lower bound\n";
    cin>>no;
    std::vector<int>::iterator l;
    l=std::lower_bound(a.begin(),a.end(),no);
    std::cout<<"lower bound is "<<(l-a.begin());

    std::vector<int>::iterator u;
    u=std::upper_bound(a.begin(),a.end(),no);
    std::cout<<"upper bound is "<<(u-a.begin());

}
