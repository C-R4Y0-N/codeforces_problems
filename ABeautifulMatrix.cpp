#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int x,y,p,i=0; //medio es x=2, y=2
    int arr[26];
    for (int i=0; i<25; i++)
    {
        cin>>arr[i];
    }
    if(arr[11]==1)
    {
        cout<<"0"<<endl;
    }
    else
    {
        while(i<25)
        {
          if(arr[i]==1)
            {
                p=i+1;
            }
            i++;  
        }
        if(p==5||p==10||p==15||p==20||p==25)
        {
            x=5;
        }
        else if(p==4||p==9||p==14||p==19||p==24)
        {
            x=4;
        }
        else if(p==3||p==8||p==13||p==18||p==23)
        {
            x=3;
        }
        else if(p==2||p==7||p==12||p==17||p==22)
        {
            x=2;
        }
        else if(p==1||p==6||p==11||p==16||p==21)
        {
            x=1;
        }
        if(p>=1 && p<=5)
        {
            y=5;
        }
        else if(p>=6 && p<=10)
        {
            y=4;
        }
        else if(p>=11 && p<=15)
        {
            y=3;
        }
        else if(p>=16 && p>=20)
        {
            y=2;
        }
        else if(p>=21 && p>=25)
        {
            y=1;
        }
        x-=2;
        if(x<0)
        {
        x*=-1;
        }
        y-=2;
        if(y<0)
        {
        y*=-1;
        }
        x=x+y;
        x-=2;
        cout<<x<<endl;
    }
    return 0;
}