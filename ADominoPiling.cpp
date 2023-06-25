#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,m;
    cin>>n>>m;
    n*=m;
    if(n%2!=0)
    {
        n--;
    }
    n/=2;
    cout<<n;
    return 0;
}