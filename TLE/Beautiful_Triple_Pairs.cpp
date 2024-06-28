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

        vector<long long>v(n,0);

        for(auto &it:v) cin>>it;

        // set<vector<long long>>vv;
        vector<vector<long long>>vv;

        for(int i = 0; i<=n-3; i++){
            vv.push_back({v[i],v[i+1],v[i+2]});
            // vv.insert({v[i],v[i+1],v[i+2]});
        }

        if(vv.size()==0) cout<<0<<'\n';
        else{
            set<vector<long long>>mp;
            long long ans = 0;
            sort(vv.begin(),vv.end());
            while(vv.size()>=2){
                vector<long long>vt = *vv.begin();
                // if(mp.count(vt)){
                //     vv.erase(vv.begin());    
                //     continue;
                // }
                mp.insert(vt);
                vv.erase(vv.begin());
                // set<vector<long long>>tt;
                for(auto it = vv.begin(); it!=vv.end(); it++){
                    vector<long long>temp = *it;
                    if((temp[0]==vt[0]) && (temp[1]==vt[1]) && (temp[2]!=vt[2])){
                        ans++;
                        // tt.insert(temp);
                        // break;
                    }
                    else if((temp[0]==vt[0]) && (temp[1]!=vt[1]) && (temp[2]==vt[2])){
                        ans++;
                        // tt.insert(temp);
                        // break;
                    }
                    else if((temp[0]!=vt[0]) && (temp[1]==vt[1]) && (temp[2]==vt[2])){
                        ans++;
                        // tt.insert(temp);
                        // break;
                    }
                }
            }
            cout<<ans<<'\n';
        }

    }


    return 0;
}