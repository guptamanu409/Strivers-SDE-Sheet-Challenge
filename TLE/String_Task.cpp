#include<bits/stdc++.h>
using namespace std;

bool helper(char ch){
    if(ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u' || ch=='y') return true;
    return false;
}

int main(){

    ios::sync_with_stdio(false);
    cin.tie(NULL);

    string s;
    cin>>s;

    int n = s.size();

    for(int i = 0; i<n; i++){
        char ch = (s[i]<97)? (char)(s[i]-65+97) : s[i];
        if(!helper(ch)){
            cout<<'.'<<ch;
        }
    }


    return 0;
}