#include<bits/stdc++.h>
using namespace std;

#define m (int)1e6

// vector<long long>pre(m,0);
// void prefix(){
//     for(long long i = 1; i<=m; i++) pre[i] = (long long)(i*i);
// }

int main(){

    ios::sync_with_stdio(false);
    cin.tie(NULL);

    // freopen("input.txt","r",stdin);
    // freopen("output.txt","w",stdout);

    int t;
    cin>>t;
    //prefix();
    while(t--){
        long long n, sum = 0;

        cin>>n;
        for(int i = 0; i<n; i++){
            long long x;
            cin>>x;
            sum+=x;
        }
        // long long index = lower_bound(pre.begin(),pre.end(),sum) - pre.begin();
        // (pre[index]==sum)? cout<<"YES"<<'\n' : cout<<"NO"<<'\n';

        long long val = sqrt(sum);
        ((long long)(val*val)==sum)? cout<<"YES"<<'\n' : cout<<"NO"<<'\n';
    }

    return 0;
}