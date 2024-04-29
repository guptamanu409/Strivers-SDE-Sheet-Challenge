#include<bits/stdc++.h>
using namespace std;

bool helper(int n, int m, vector<string>&s, char x){
    bool fr, lr, fc, lc;
    fr = false;
    lr = false;
    fc = false;
    lc = false;

    for(int i = 0; i<n; i++){
        if(s[i][0]==x) fc = true;
        if(s[i][m-1]==x) lc = true;
    }

    for(int i = 0; i<m; i++){
        if(s[0][i]==x) fr = true;
        if(s[n-1][i]==x) lr = true;
    }

    return (fr && lr && fc && lc);
}

int main(){

    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin>>t;

    while(t--){

        int n,m;
        cin>>n>>m;
        vector<string>s;
        for(int i = 0; i<n; i++){
            string x;
            cin>>x;
            s.push_back(x);
        }

        (helper(n,m,s,'B') || helper(n,m,s,'W'))? cout<<"YES" : cout<<"NO";
        cout<<'\n';
    }

    return 0;
}