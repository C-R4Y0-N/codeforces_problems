//Incompleto
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int i=0,n;
    cin>>n;
    string s;
    while(n!=1)
    {
        if(n%2==0)
        {
            s[i]='0';    
        }
        else
        {
            s[i]='1';
        }
        n/=2;
        i++;
    }
    cout<<s;
    return 0;
}