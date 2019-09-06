
/*Prateek Bhayia likes to play with bits. One day Prateek bhayia decides to
assign a task to his student Sanya. You have help Sanya to complete this task. Task
 is as follows - Prateek Bhayia gives Q queries each query containing two integers a and b. Your task is to
  count the no of set-bits in for all numbers between a and b (both inclusive)*/

#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main() {
    int i,Q,a,b,j,k,it;
    cin>>Q;
    for(i=0;i<Q;i++)
    {
        it=0;
        cin>>a;
        cin>>b;
        for(j=a;j<=b;j++)
        {
            k=j;
            while(k>0)
            {
                if(k&1==1)
                {
                    it++;
                }
                k=k>>1;
            }
        }
        cout<<it<<endl;
    }
	return 0;
}


/*Input Format:
Read Q - No of Queries, Followed by Q lines containing 2 integers a and b.

Constraints:
Q,a,b are integers.

Output Format
Q lines, each containing an output for your query.

Sample Input
2
1 1
10 15
Sample Output
1
17
*/
