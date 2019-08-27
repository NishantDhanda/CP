// extract i th bit of a number method 2(mask)
#include<iostream>
using namespace std;
int main()
         {
             int a,n,i,j,k;
             cout<<"Enter number\n";
             cin>>n;
             cout<<"Which bit to extract?\n";
             cin>>i;
             j=1;
             j=j<<i;
             k=n&j;
             if(k==0)
             {
                 cout<<"i th bit is 0\n";
             }
             else
             {
                 cout<<"i th bit is 1\n";
             }


         }

