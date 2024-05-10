#include<bits/stdc++.h>
using namespace std;

int main(){

    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n,m;
    cin>>n>>m;
    multiset<int>mp;
    for(int i = 0; i<n; i++){
        int it;
        cin>>it;
        mp.insert(it);
    }
    
    for(int i = 0; i<m; i++){
        int x;
        cin>>x;

        if((mp.empty()) || (x<*mp.begin())){
            cout<<-1<<'\n';
            continue;
        }
        else{
            auto pos = upper_bound(mp.begin(),mp.end(),x);
            pos--;
            cout<<*pos<<'\n';
            mp.erase(pos);
        }

    }
    return 0;
}