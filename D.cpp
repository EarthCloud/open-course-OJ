//
// Created by admin on 2021-02-05.
//

#include <bits/stdc++.h>
using namespace std;
int e[100];
int a0(int x,int a)
{
    bool z=0;
    if(x%a==0)    z=true;
    return z;
}
int b0(int x,int b)
{
    bool z=0;
    if((x+1)%b==0)    z=true;
    return z;
}
int c0(int x,int c)
{
    bool z=0;
    if((x+2)%c==0)    z=true;
    return z;
}
int main()
{
    int n,z=0;
    bool x;
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        int a,b,c;
        x=false;
        cin>>a>>b>>c;
        for(int i=1000;i<=9999&&x==false;i++)
        {
            if((a0(i,a)==1&&b0(i,b)==1)&&c0(i,c)==1)
            {
                e[z]=i;
                z++;
                x=true;
            }
        }
        if(x==false)
        {
            e[z]=-1;
            z++;
        }
    }
    for(int i=0;i<n;i++)
    {
        if(e[i]==-1)
        {
            cout<<"Impossible"<<endl;
        }
        else
        {
            cout<<e[i]<<endl;
        }
    }
    return 0;
}
