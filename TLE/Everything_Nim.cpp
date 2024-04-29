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

        set<int>mp;
        int maxi = INT_MIN;
        int mini = INT_MAX;
        for(int i = 0; i<n; i++){
            int x;
            cin>>x;
            mp.insert(x);
            maxi = max(maxi,x);
            mini = min(mini,x);
        }
        
        if(maxi==mini || (*mp.begin()>=2))cout<<"Alice"<<'\n';
        else{
            vector<int>v;
            for(auto &it:mp)v.push_back(it);
            int val = v[0];
            // false bob ------------ true alice
            bool check = (val==1)? false : true;
            int i = 1;
            n = v.size();
            int prev = v[0];
            while(i!=n-1){
                if((v[i]-prev)<=1) check = !check;
                else break;
                prev = v[i];
                i++;
            }
            (check)? cout<<"Alice" : cout<<"Bob";
            cout<<'\n';

        }
    }

    return 0;
}