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

        set<int>st;
        vector<int>v(n,0);

        for(auto &it:v){
            cin>>it;
            st.insert(it);
        }
        bool check = true;
        for(int k = 1; k<=1023; k++){
            check = true;
            for(int i = 0; i<n; i++){
                if(st.count(v[i]^k)==0){
                    check = false;
                    break;
                }
            }
            if(check){
                cout<<k<<'\n';
                break;
            }
        }
        if(!check)cout<<-1<<'\n';
    }

    return 0;
}