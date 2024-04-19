#include<bits/stdc++.h>
using namespace std;

// bool solve(int i, int n, long long tar, vector<long long>&v){
//     if(tar==0) return true;
//     if(i==n-1) return ((tar-v[i])==0);
//     bool check = false;
//     if((tar-v[i])>=0){
//         check = solve(i+1,n,tar-v[i],v);
//         if(check) return true;
//     }
//     check = solve(i+1,n,tar,v);
//     if(check) return true;

//     return false;
// }

bool solve(int i, int n, long long sum, vector<long long>&v, long long tar){
    if(i>=n){
        return (sum==tar);
    }
    bool check = false;
    check = solve(i+1,n,sum+v[i],v,tar);
    if(check) return true;

    check = solve(i+1,n,sum-v[i],v,tar);
    if(check) return true;

    return false;
}

int main(){

    int n,x;
    cin>>n>>x;

    long long sum = 0;
    vector<long long>v(n,0);
    for(auto &it:v){
        cin>>it;
        sum+=it;
    }

    if(x==sum || ((x<0) && (x==((sum-(2*v[0]))*-1))))cout<<"YES";
    else if(x>sum || ((x<0) && (x<((sum-(2*v[0]))*-1)))) cout<<"NO";
    else{
        (solve(1,n,v[0],v,x))? cout<<"YES" : cout<<"NO";
    }


    return 0;
}