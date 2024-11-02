#include<bits/stdc++.h>
using namespace std;
int main()
{
    int num;
    cin>>num;
    int sum =0;
    int tmp = num;
    while(num > 0)
    {
        int rem = num % 10;
        sum+=(rem*rem*rem);
        num = num/10;

    }
    if(sum == tmp)
    {
        cout<<"Armstrong";

    }else {
        cout<<"Not a Armstrong";
    }
}