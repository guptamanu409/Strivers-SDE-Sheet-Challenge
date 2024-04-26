#include<bits/stdc++.h>
using namespace std;

vector<long long>v(1e6+1,0);

// void solve(int k){
//    long long odd = 1;
//    long long sum = 0;
//    for(int i = 1; i<=k; i++){
//     long long t = i;
    
//     while(t){
//         sum+=odd;
//         odd+=2;
//         t--;
//     }
//     v.push_back(sum);
//     sum = 0;
//    } 
// }

void solve(){
    v[0] = 1;
    v[1] = 1;
    long long sum = 1;

    for(int i = 2; i<=1e6; i++){
        v[i] = sum+v[i-1];
        sum++;
    }
}

int main(){

    int k;
    cin>>k;
    solve();
    // cout<<v[k-1];
    if(k==1)cout<<1;
    else {
        long long sum = 0;
        long long cur = v[k];
        // cout<<cur<<endl;
        long long tot = cur+k-1;
        sum = (long long)(((2+((tot-1)*2))/2)*tot);
        // cout<<sum<<endl;
        cur--;
        cur =  (long long)(((2+((cur-1)*2))/2)*cur);
        // cout<<cur<<endl;
        cout<<(long long)(sum-cur);
    }

}