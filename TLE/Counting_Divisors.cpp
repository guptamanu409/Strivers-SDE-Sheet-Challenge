#include<bits/stdc++.h>
using namespace std;

vector<vector<int>>v(1e6+1);

void compu(){

    // for(int i = 0; i<=1e6; i++) v[i].push_back(1);

    for(int i = 2; i<=1e6; i++){
        v[i].push_back(i);
        for(int j = i+i; j<=1e6; j+=i) v[j].push_back(i);
    }

}

int helper(int x, set<int>&st){

    for(int i = 2; i*i<=x; i++){
        if((x%i)==0){
            st.insert(i);
            st.insert(x/i);
        }
    }

    return (st.size()+2);
}

int main(){

    ios::sync_with_stdio(false);
    cin.tie(NULL);

    // compu();

    int t;
    cin>>t;

    while(t--){

        int x;
        cin>>x;
        set<int>st;
        // cout<<(v[x].size())+1<<'\n';
        if(x==1)cout<<1<<'\n';
        else cout<<helper(x,st)<<'\n';
    }

    return 0;
}