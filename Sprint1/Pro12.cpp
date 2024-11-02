#include<bits/stdc++.h>
using namespace std;
int main()
{
    string str;
    cin>>str;
    int vowel=0;
    
    for(int i =0;i<str.size();i++)
    {
        str[i] = tolower(str[i]);
        // cout<<str[i];
        if(str[i] == 'a'||str[i] == 'e'||str[i] == 'i'||str[i] == 'o'||str[i] == 'u'){
           vowel++;
        }
    }

    cout<<"vowels "<<vowel<<endl;
    cout<<"conso "<<str.size()-vowel;
    return 0;
}