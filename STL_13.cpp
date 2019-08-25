// sorting a vector
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main()
{
    vector<char> v;
    cout<<"Elements?\n";
    int n,i;
    char x;
    cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>x;
        v.push_back(x);
    }
    sort(v.begin(),v.end());
    for(i=0;i<v.size();i++)
    {
        cout<<v[i]<<endl;
    }

}

