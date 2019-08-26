// building min heap using priority queue
#include<iostream>
#include<queue>
#include<vector>
#include<bits/stdc++.h>
#include<functional>
using namespace std;
int main()
{
    priority_queue<int,vector<int>,greater<int> > pq;            // greater<int> is inbuilt comparator included in #include<functional>
    cout<<"Enter numbers\n";
    int n,i,j;
    cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>j;
        pq.push(j);
    }

    while(!pq.empty())
    {
        cout<<pq.top()<<endl;        // returns top element
        pq.pop();                     // removes top element
    }
}

