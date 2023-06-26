//Incompleto
#include <bits/stdc++.h>
#include <bitset>
using namespace std;
int main()
{
    int n,r,i=0;
    string y;
    cin>>n;
    bitset<8> t(n); // 1 0 0 0 0 0 0 0 0
    r=t.count();
    if(r==1)
    {
        t.flip();
        y=t.to_string();
        while (i<=7)
        {
            if(y[i]=='1')
            {
                cout<<i-1<<endl;
                break;
            }
            i++;
        }
        
    }
    else
    {
        cout<<"No existe"<<endl;
    }
    return 0;
}