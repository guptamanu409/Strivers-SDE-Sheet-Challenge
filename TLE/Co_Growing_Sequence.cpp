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

        vector<int>v(n,0);

        for(auto &it:v) cin>>it;

        vector<int>bit(n,0);

        for(int x = 0; x<=30; x++){
            bool check = false;
            int bitmask = 1<<x;
            for(int i = 0; i<n; i++){
                if((v[i]&bitmask) && !check){
                    check = true;
                }
                else if(((v[i]&bitmask)==0) && check) bit[i]+=bitmask;
            }
        }

        for(auto &it:bit) cout<<it<<" ";
        cout<<'\n';
    }


    return 0;
}