#include<bits/stdc++.h>
using namespace std;

int main(){

    int n;
    cin>>n;

    vector<long long>arr(n,0);

    for(auto &it:arr){
        cin>>it;
    }

    sort(arr.begin(),arr.end());
    long long ans = 0;
    for(long long i = n-1; i>=0; i--){
        long long val = arr[i];
        if(val==(i+1)) continue;
        else{
            if(val>i+1){
                ans += (long long)(val-(i+1));
            }
            else ans+= (long long)((i+1)-val);
        }
    }

    cout<<ans<<'\n';

    return 0;
}