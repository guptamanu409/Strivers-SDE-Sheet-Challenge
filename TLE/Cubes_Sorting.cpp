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

        unordered_set<long long>mp;
        long long temp;
        cin>>temp;
        mp.insert(temp);
        bool check = true;
        for(int i = 0; i<n-1; i++){
            long long x;
            cin>>x;
            if(x>temp) check = false;
            else temp = x;
            mp.insert(x);
        }
        if(mp.size()<n) cout<<"YES"<<'\n';
        else{
            (check)? cout<<"NO"<<'\n' : cout<<"YES"<<'\n';
        }
    }


    return 0;
}