#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int f = 1;
    for(int i=2;i<=n;i++)
    {
        f = f*i;


    }
    cout<<f;
}