// queue and its functions

#include<iostream>
#include<stack>
#include<queue>
using namespace std;
int main()
{
    queue<int> q;
    int a;
    cout<<"Number of strings\n";
    int n;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>a;
        q.push(a);
    }
    while(!q.empty())
    {
        cout<<q.front()<<endl;                    // returns the front element
        q.pop();                                //removes the front element
    }

}

