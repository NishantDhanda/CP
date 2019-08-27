// change i th bit of number to 1
#include<iostream>
using namespace std;
int main()
         {
             int a,n,i,j,k=1;
             cout<<"Enter number\n";
             cin>>n;
             cout<<"enter bit\n";
             cin>>i;
             k=k<<i;
             n=n|k;
             cout<<"Number is "<<n<<endl;
         }


