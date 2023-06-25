#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,k,c=0,hola,y; //n: numero de participante //k: puesto minimo
    cin>>n>>k;
    vector<int> arr;
    for (int i=0; i<n; i++)
    {
        cin>>hola;
        arr.push_back(hola);
    }
    for (int j=0; j<n; j++)
    {
        if(arr[j]>=arr[k-1] && arr[j]>0)
        {
            c++;
        }
    }
    cout<<c<<endl;
    return 0;
}