// extract i th bit of a number
#include<iostream>
using namespace std;
int main()
         {
             int a,n,i,j;
             cout<<"Enter number\n";
             cin>>n;
             cout<<"Which bit to extract?\n";
             cin>>i;
             j=n;
             j=j>>i;
             j=j&1;
             cout<<"i th bit is "<<j<<endl;
         }
