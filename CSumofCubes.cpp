#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    unsigned long long int x,ini,fin,n,j=0;
    vector<unsigned long long int> a;
    cin>>n;
    while(j<n)
    {
        cin>>x;
        if(x<=100)
        {
            for(int i=1; i<=5; i++)
            {
              a.push_back(pow(i,3));  
            }
        }
        if(x>1000 && x<=10000)
        {
            for(int i=1; i<=10; i++)
            {
                a.push_back(pow(i,3));
            }
        }
        if(x>10000 && x<=1000000)
        {
            for(int i=1; i<=22; i++)
            {
                a.push_back(pow(i,3));
            }
        }
        if(x>1000000 && x<=1000000)
        {
            for(int i=1; i<=50; i++)
            {
                a.push_back(pow(i,3));
            }
        }
        if(x>=1000000)
        {
            for(unsigned long long int i=1; i<=100000000000; i++)
            {
                a.push_back(pow(i,3));
            }
        }
        ini=0;
        fin=a.size()-1;
        while(a[ini]+a[fin]!=x)
        {
        if(a[ini]+ a[fin]>x)
        {
            fin--;
        }
        if(a[ini] + a[fin]>x)
        {
            ini++;
        }
        if(ini==fin)
        {
            if(a[ini]+a[fin]!=x)
            {
                cout<<"NO"<<endl;
                break;
                j++;
            }
        }
        }
        if(a[ini]+a[fin]==x)
        {
            cout<<"YES"<<endl;
            j++;
        }
    }
    return 0;
}