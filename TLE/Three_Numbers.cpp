#include<bits/stdc++.h>
using namespace std;

int main(){

    int k,s;

    cin>>k>>s;

    set<vector<int>>st;
    int ans = 0;

    for(int i = 0; i<=k; i++){
        for(int j = 0; j<=k; j++){

            int z = s - (i+j);
            // if(z>=0 && z<=k) st.insert({i,j,z});
            if(z>=0 && z<=k) ans++;
        }
    }

    // cout<<st.size()<<'\n';
    cout<<ans<<'\n';

    return 0;
}