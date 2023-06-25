#include <iostream>
#include <bits/stdc++.h>
#include <conio.h>
#include <locale.h>
using namespace std;
int main()
{
    int n,j=0,c=0;
    int arr[3];
    cin>>n;
    while(j<n)
    {
        for (int i=0; i<3; i++)
        {
            cin>>arr[i];
        }
        if((arr[0]==1 && arr[1]==1)||(arr[0]==1 && arr[2]==1)||(arr[1]==1 && arr[2]==1))
        {
            c++;
        }
        j++;
    }
    cout<<c<<endl;
    return 0;
}