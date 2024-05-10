#include<bits/stdc++.h>
using namespace std;

int main(){

    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin>>t;

    while(t--){

        int n;
        cin>>n;

        vector<int>ans;
        int x;
        cin>>x;
        ans.push_back(x);
        for(int i = 1; i<n; i++){
            cin>>x;
            if(upper_bound(ans.begin(),ans.end(),x)==ans.end()) ans.push_back(x);
            else{
                int pos = upper_bound(ans.begin(),ans.end(),x) - ans.begin();
                ans[pos] = x;
            }
        }

        cout<<ans.size()<<" ";
        for(auto &it:ans) cout<<it<<" ";
        cout<<'\n';
    }


    return 0;
}