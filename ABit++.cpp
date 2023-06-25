#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,c=0;
    string s;
    cin>>n;
    for(int i=0; i<n; i++)
    {
        cin>>s;
        if(s[0]=='+'||s[2]=='+')
        {
            c++;
        }
        else if(s[0]=='-'||s[2]=='-')
        {
            c--;
        }
    }
    cout<<c<<endl;
    return 0;
}