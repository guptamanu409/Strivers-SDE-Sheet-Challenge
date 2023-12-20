#include<bits/stdc++.h>
using namespace std;

int main(){

    int k,n;
    cin>>n>>k;

    vector<int>v(n,0);
    bool check = true;
    int mini = INT_MAX, maxi = INT_MIN;
    int cnt = 0;
    int x = 0;
    for(auto &it:v){
        cin>>it;
        mini = min(it,mini);
        maxi = max(maxi,it);
        cnt++;
        if(cnt==k){
            x = it;
        }
        else if(cnt>k && check){
            check = (x==it);
        }
    }

    if(maxi==mini || n==1) cout<<0<<'\n';

    else if(!check) cout<<-1<<'\n';
    
    else if(k==n && (v[n-1]!=v[n-2])) cout<<n-1<<'\n';

    else{
        int i = k;
        for(; i>0; i--){
            if(v[i]!=v[i-1])break;
        }
        int same = n-i;
        cout<<n-same<<'\n';
    }

    return 0;
}