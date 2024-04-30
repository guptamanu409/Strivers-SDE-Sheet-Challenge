#include<bits/stdc++.h>
using namespace std;

int main(){

    int n;
    cin>>n;

    vector<long long>v(n,0);

    for(auto &it:v) cin>>it;

    sort(v.begin(),v.end());

    long long maxi = (long long)(1e18);

    long long sum = v[0];
    // if(sum==0){
        
    //     cout<<0<<endl;
    //     return 0;
    // }
    bool ans = true;

    for(int i = 1; i<n; i++){
        if(v[i]==0 || sum==0){
            // cout<<0<<endl;
            // return 0;
            sum = 0;
            break;
        }
        if((long long)v[i]>((long long)(maxi/sum))){
            // ans = false;
            sum = -1;
            break;
        }
        else sum = (long long)(sum*v[i]);
    }

    // (ans)? cout<<sum : cout<<-1;
    cout<<sum;
    cout<<endl;

    return 0;
}