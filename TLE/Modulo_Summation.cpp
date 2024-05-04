#include<bits/stdc++.h>
using namespace std;

int main(){

    int n;
    cin>>n;

    vector<long long>v(n,0);
    long long sum = 0;
    // long long maxi = 93;
    for(auto &it:v){
        cin>>it;
        // cout<<maxi%it<<" ";
        // sum+=(maxi%it);
        sum+=(it-1);
    }

    cout<<sum<<endl;


    return 0;
}