
// using upper and lower bound functions to find number of occurence of any number in vector.

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

    cout<<"Enter number\n";
    cin>>no;
    std::vector<int>::iterator c;
    std::vector<int>::iterator b;

    c=std::upper_bound(a.begin(),a.end(),no);
    b=std::lower_bound(a.begin(),a.end(),no);

    std::cout<<"Occurence of "<<no<<" is "<<(c-b)<<endl;

}
