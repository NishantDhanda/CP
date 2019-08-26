// stack and its functions

#include<iostream>
#include<stack>
using namespace std;
int main()
{
    stack<string> s;
    string a;
    cout<<"Number of strings\n";
    int n;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        getline(cin,a);
        s.push(a);
    }
    while(!s.empty())
    {
        cout<<s.top()<<endl;                    // returns the top element
        s.pop();                                //removes the top element
    }

}
