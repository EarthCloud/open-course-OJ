//
// Created by admin on 2021-02-05.
//

#include <bits/stdc++.h>
using namespace std;
int yes7(int a)
{
    bool b=true;
    int c;
    if(a%7==0)   b=false;
    while(a>9&&b==true)
    {
        c=a%10;
        if(c==7)
        {
            b=false;
        }
        a=(int)a/10;
    }
    if(a==7)    b=false;
    return b;
}
int main()
{
    int n,all=0;
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        if(yes7(i)==1)
        {
            all++;
        }
    }
    cout<<all;
    return 0;
}
