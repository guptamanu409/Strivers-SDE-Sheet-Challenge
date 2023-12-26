#include<bits/stdc++.h>
using namespace std;

int main(){

    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin>>n;

    vector<long long>sort_sum(n,0), pre_sum(n,0);
    long long prev = 0;

    for(int i = 0; i<n; i++){
        cin>>pre_sum[i];
        sort_sum[i] = pre_sum[i];
        pre_sum[i] = prev + pre_sum[i];
        prev = pre_sum[i];
    }

    sort(sort_sum.begin(), sort_sum.end());

    for(int i = 1; i<sort_sum.size(); i++){
        sort_sum[i] = (long long)(sort_sum[i] + sort_sum[i-1]);
    }

    int m;
    cin>>m;

    while(m--){
        int t, l,r;
        cin>>t>>l>>r;

        if(t==1){
            if(l==1) cout<<(long long)pre_sum[r-1]<<'\n';
            else cout<<(long long)(pre_sum[r-1] - pre_sum[l-2])<<'\n';
        }
        else{
            if(l==1) cout<<(long long)sort_sum[r-1]<<'\n';
            else cout<<(long long)(sort_sum[r-1] - sort_sum[l-2])<<'\n';
        }
    }
    return 0;
}