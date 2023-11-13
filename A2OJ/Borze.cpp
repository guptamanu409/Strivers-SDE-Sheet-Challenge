#include<bits/stdc++.h>
using namespace std;

int main(){

    ios::sync_with_stdio(false);
    cin.tie(NULL);

    string s;
    cin>>s;

    int n = s.size();
    int i = 0;
    while(i<n){
        if(s[i]=='.'){
            cout<<0;
            i++;
        }
        else if(s[i]=='-' && s[i+1]=='.'){
            cout<<1;
            i+=2;
        }
        else{
            cout<<2;
            i+=2;
        }
    }
    cout<<endl;
    return 0;
}