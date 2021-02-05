//
// Created by admin on 2021-02-05.
//

#include <bits/stdc++.h>
using namespace std;
int sushu(int a)
{
    bool b=1;
    if(a==1) b=0;
    for(int i=2;i<=sqrt(a)&&b==1;++i){
        if(a%i==0) b=0;
    }
    return b;
}
int main()
{
    int n;
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        if(sushu(n-i)==1&&sushu(i)==1)   {
            cout<<i<<" "<<n-i;
            break;
        }
    }
    return 0;
}
