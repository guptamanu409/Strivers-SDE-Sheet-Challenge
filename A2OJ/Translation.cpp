#include<bits/stdc++.h>
using namespace std;

int main(){

    string s,t;
    cin>>s>>t;

    reverse(s.begin(),s.end());

    (s==t)? cout<<"YES"<<endl : cout<<"NO"<<endl;

    return 0;
}