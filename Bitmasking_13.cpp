/* Tavas & SaDDas
Lucky number made with 4 and 7
4,7,47,74,444,447............
if i/p=447
    Find number of lucky numbers before it
    ans=6
*/
#include<iostream>
#include<math.h>
#include<cstring>
using namespace std;
int main()
{
    char c[100];
    cin>>c;
    int n=strlen(c);
    int t=2,ans=1;
    for(int i=1;i<n;i++)
    {
        ans=ans+t;
        t=t*2;
    }
    for(int i=n-1;i>=0;i--)
    {
        if(c[i]=='7')
        {
            ans=ans+pow(2,(n-(i+1)));
        }
    }

    cout<<ans<<endl;
}

