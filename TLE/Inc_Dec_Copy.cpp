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

        vector<long long>a(n,0);

        for(auto &it:a)cin>>it;

        vector<long long>b(n+1,0);

        for(auto &it:b) cin>>it;

        long long mini = LLONG_MAX;
        long long sum = 0;
        bool check = false;
        for(int i = 0; i<n; i++){
            sum+= (long long)abs(a[i]-b[i]);
            if(a[i]==b[n] || (b[i]==b[n])) check = true;
            else if((b[i]>a[i]) && (b[n]>a[i] && b[n]<=b[i])) check = true;
            else if((b[i]<a[i]) && (b[n]<a[i] && b[n]>=b[i])) check = true;
            mini = min((long long)(abs(a[i]-b[n])),mini);
        }

        if(check){
            cout<<min((long long)(sum+1),(long long)(sum+mini+1))<<'\n';
        }
        else cout<<(long long)(sum+mini+1)<<'\n';

        // if(mini==0) cout<<(sum+1)<<'\n';
        // else cout<<(sum+mini)<<'\n';


    }

    return 0;
}