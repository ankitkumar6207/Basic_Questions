#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    int flag = true;
    cin>>n;
    if(n == 0 || n==1){
        cout<<"Prime";
    }
    for(int i=2;i<=sqrt(n);i++)
    {
        if(n % i ==0){
            cout<<"Not Prime";
            flag = false;
            break;
        }
    }
    if(flag == true)
    {
        cout<<"Prime";
    }

}