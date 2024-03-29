#include<bits/stdc++.h>
using namespace std;

void helper(vector<string>&s,bool check){
    // for(int i = 0; i<2; i++){
    //     for(int j = 0; j<2; j++){
    //         cout<<ch;
    //     }
    //     cout<<'\n';
    // }

    long long n = s.size();
    for(long long i = 0; i<n; i++) cout<<s[i];
    cout<<'\n';
    for(long long i = 0; i<n; i++) cout<<s[i];
    if(check)cout<<'\n';
}

int main(){

    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin>>t;

    while(t--){

        int n;
        cin>>n;

        int r = 0,c = 0;
        vector<string>s;
        while(r<n){
            c = 0;
            vector<string>s;
            while(c<n){
                ((r+c)&1)? s.push_back("..") : s.push_back("##");
                c++;
            }
            // cout<<'\n';
            bool check = true;
            if(r==n-1 && c==n-1)check = false;
            helper(s,check);
            r++;
        }
    }

    return 0;
}