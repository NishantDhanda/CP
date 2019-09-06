// Subsequence of a string
/* eg- abc    2^3 subsequences
a
b
c
ab
bc
ac
abc
NULL
*/

#include<iostream>
#include<cstring>
#include<bits/stdc++.h>
using namespace std;

void filterchar(string s,int a)
{
    int i=0;
    while(a>0)
    {
        if(a&1==1)
        {
            cout<<s[i];
        }
        else
        {
            cout<<"";
        }
        i++;
        a=a>>1;
    }
}

void generatesubsequence(string s)
{
    int n=s.length();
    int range=(1<<n)-1;
    for(int i=0;i<=range;i++)
    {
        filterchar(s,i);
        cout<<endl;
    }
}


int main()
{
    string s;
    cout<<"Enter string\n";
    getline(cin,s);
    generatesubsequence(s);
}


