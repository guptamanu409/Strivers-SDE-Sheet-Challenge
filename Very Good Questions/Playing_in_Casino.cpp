
// https://codeforces.com/contest/1808/problem/B

#include<bits/stdc++.h>
using namespace std;

int main(){

    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin>>t;

    while(t--){

        int n,m;
        cin>>n>>m;

        vector<long long>cols[m]; // Rows fix ho gayi hai
        // for(auto &it:cols) cout<<cols<<" ";

        // vector<vector<int>>cols;

        // cout<<cols[0].size();

        for(int i = 0; i<n; i++){
            for(int j = 0; j<m; j++){
                int x;
                cin>>x;
                // cols[j].push_back(x);
                cols[j].push_back(x);
            }
        }

        
        // cout<<endl;
        // cout<<cols[0].size(); // should be equal to n i.e the rows
        long long ans = 0;
        for(int c = 0; c<m; c++){
            sort(cols[c].begin(),cols[c].end());
            for(int j = n-1; j>=0; j--){
                long long right = 0, left = 0;
                right = (long long)(n-j-1)*cols[c][j]; // Itni bar reduce hoga
                left = (long long)(j*cols[c][j]); // Itni bar ye add hoga
                ans+=left;
                ans-=right;
            }
        }
        cout<<ans<<'\n';
    }

    return 0;
}