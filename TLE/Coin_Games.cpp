#include<bits/stdc++.h>
using namespace std;

int main(){

    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin>>t;

    while(t--){

        int n;
        cin>>n;

        string s;
        cin>>s;

        int cnt = 0;
        for(auto &it:s) cnt+= (it=='U');
        (cnt&1)? cout<<"Yes" : cout<<"No";
        cout<<'\n';

        // if(n==1){
        //     if(s[0]=='U') cout<<"Yes";
        //     else cout<<"No";
        // }
        // else if(n==2){
        //     if(s=="UU")cout<<"No";
        //     else if(s=="UD" || s=="DU")cout<<"Yes";
        //     else cout<<"No";
        // }
        // else{
            
        // }

    }


    return 0;
}