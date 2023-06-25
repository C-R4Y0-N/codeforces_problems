#include <iostream>
#include <bits/stdc++.h>
#include <conio.h>
#include <locale.h>
using namespace std;
int main()
{
    int n,i=1,t;
    cin>>n;
    while (i<=n)
    {
        string p;
        cin>>p;
        if(p.size()>10)
        {
            t=p.size();
            t-=2;
            cout<<p[0]<<t<<p[p.size()-1]<<endl;
        }
        else
        {
            cout<<p<<endl;
        }
        i++;
    }
    return 0;
}