#include<bits/stdc++.h>
using namespace std;

long long solve(int i, int n, int w, vector<int>&val, vector<int>&wi){
    if(w==0)return 0;
    if(i==n-1) return (w>=wi[i])? val[n-1] : 0;
    long long maxi = 0;
    if((w-wi[i])>=0){
        maxi = solve(i+1,n,w-wi[i],val,wi) + val[i];
    }
    maxi = max(maxi,solve(i+1,n,w,val,wi));
    return maxi;
}

int main(){

    int n,w;
    cin>>n>>w;

    vector<int>val,we;

    for(int i = 0; i<n; i++){
        int x,y;
        cin>>x>>y;
        we.push_back(x);
        val.push_back(y);
    }

    cout<<solve(0,n,w,val,we);


    return 0;
}