//
// Created by admin on 2021-02-05.
//

#include <bits/stdc++.h>
using namespace std;
int a[12];
int main()
{
    int rest=0,keep=0;
    bool x=0;
    for(int i=0;i<12;i++)
    {
        cin>>a[i];
    }
    for(int i=0;i<=11&&x==0;i++)
    {
        rest=rest+300;
        if(rest<a[i])
        {
            cout<<"-"<<i+1;
            x=1;
        }
        rest=rest-a[i];
        keep=keep+rest-rest%100;
        rest=rest%100;
    }
    if(x==0)    cout<<(int)keep*1.2+rest;
}
