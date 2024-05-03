#include<bits/stdc++.h>
using namespace std;

bool helper(string a, string &b, int m){
    int cnt = 0;
    int n = a.size();

    // for(int i = 0; i<n; i++){

    // }

    int i = 0, j = 0;
    while(i<n && j<m){
        if(a[i]==b[j]){
            cnt++;
            i++;
            j++;
        }
        else j++;
    }
    return (cnt==n);
}

int main(){

    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin>>t;

    while(t--){

        int n,m;
        cin>>n>>m;
        string a,b;
        cin>>a>>b;
        int maxi = 0;
        // for(int i = 0; i<n; i++){
        //     // cout<<a.substr(i,j-i+1)<<'\n';
        //     bool check = helper(a.substr(0,i+1),b,m);
        //     if(check) maxi = i+1;
        //     else break;
        //     // if((maxi>=n) || (maxi>=m))break;
        
        // }

        int i = 0, j = 0;
        while(i<n && j<m){
            if(a[i]==b[j]){
                i++;
                j++;
                maxi++;
            }
            else j++;
        }
        cout<<maxi<<'\n';
    }


    return 0;
}