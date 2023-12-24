#include<bits/stdc++.h>
using namespace std;


int main(){

    int n,k;
    cin>>n>>k;

    vector<int>arr(n,0),pre_sum(n,0);

    int mini = INT_MAX, ans = INT_MAX;
    int prev = 0, sum = 0;
    for(int i = 0; i<n; i++){
        cin>>arr[i];
        sum = prev + arr[i];
        pre_sum[i] = sum;
        prev = sum;
        //ans = min(arr[i],ans);
    }

    if(k==1) cout<<(min_element(arr.begin(),arr.end()) - arr.begin())+1<<endl;
    else if(k==n) cout<<1<<endl;
    else{
        int i = n-1;
        for(; i-k>=0; i--){
            if(pre_sum[i] - pre_sum[i-k] < mini){
                mini = pre_sum[i] - pre_sum[i-k];
                ans = i-k+2;
            }
        }
        if(i+1-k==0){
            if(pre_sum[i]<mini) ans = 1;
        }
        cout<<ans<<endl;
    }



    return 0;
}