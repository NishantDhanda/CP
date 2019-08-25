#include<cstring>
#include<iostream>
using namespace std;
int main()
{
    // array of strings
    int n,i;
    string s[100];
    cout<<"Numnber of strings?\n";
    cin>>n;
    for(i=0;i<n;i++)
    {
        getline(cin,s[i]);
    }
    for(int i=0;i<n;i++)
    {
        cout<<s[i]<<endl;
    }
}
