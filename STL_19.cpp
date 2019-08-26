// building max heap using priority queue
#include<iostream>
#include<queue>
using namespace std;
int main()
{
    priority_queue<int> pq;        // by default builds max heap
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
