#include<bits/stdc++.h>
using namespace std;
int main()
{
    string str;
    cin>>str;
    bool flag = true;
    int start = 0;
    int end = str.size()-1;
    while(start < end)
    {
        if(str[start] != str[end])
        {
            cout<<"Not palindrome";
            flag = false;
            break;
        }
        start++;
        end--;
    }
    if(flag == true)
    cout<<"palindrome";

    
    return 0;
}