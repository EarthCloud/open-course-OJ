//
// Created by admin on 2021-02-05.
//

#include <bits/stdc++.h>
using namespace std;
int main()
{
    long n,k=1,all=0;
    cin>>n;
    for(long i=1;k<=n;i++)
    {
        for(long j=1;j<=i&&k<=n;j++)
        {
            all=all+i;
            k++;
        }
    }
    cout<<all;
    return 0;
}
