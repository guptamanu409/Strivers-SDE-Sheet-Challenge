#include<bits/stdc++.h>
using namespace std;

class MyComparator{

    public:
        bool operator()(const pair<int,int> &a, const pair<int,int> &b) const{
            //return (a.first>=b.first) && ((a.second<=b.second) || (b.second>a.second));

            if(a.first>b.first) return true;
            else if(a.first==b.first){
                if(a.second<=b.second) return true;
                else return false;
            }
            else return false;
        }

};

int main(){

    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n,k;
    cin>>n>>k;

    multiset<pair<int,int>,MyComparator>mp;
    map<pair<int,int>, int>freq;

    for(int i = 0; i<n; i++){
        int x,y;
        cin>>x>>y;
        // mp[x]=y;
        mp.insert({x,y});
        freq[{x,y}]++;
    }
    // mp.insert({4,9});
    // mp.insert({1,2});
    
    // cout<<"Printing"<<endl;
    // for(auto &it:mp){
    //     cout<<it.first<<" "<<it.second;
    //     cout<<endl;
    // }

    int cnt = 1;
    for(auto &it:mp){
        
        if(cnt==k){
            cout<<freq[{it.first,it.second}];
            cout<<'\n';
        }
        cnt++;
    }

    return 0;
}