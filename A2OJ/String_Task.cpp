#include<bits/stdc++.h>
using namespace std;

int main(){

    string s;
    cin>>s;

    transform(s.begin(),s.end(),s.begin(),
            [](unsigned char c) {return tolower(c);});

    
    int n = s.size();
    for(int i = 0; i<n; i++){
        if(s[i]=='a' || s[i]=='e' || s[i]=='i' || s[i]=='o' || s[i]=='u' || s[i]=='y') continue;
        else{
            cout<<'.'<<s[i];
        }
    }

    return 0;
}