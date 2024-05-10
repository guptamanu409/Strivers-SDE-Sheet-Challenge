#include<bits/stdc++.h>
using namespace std;

int main(){

    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin>>t;

    int temp = t;
    while(t--){

        int n,r;
        cin>>n>>r;

        // vector<vector<int>>v(n+1,vector<int>(1e5,0));
        bool check = true;

        map<pair<int,int>,int>mp;

        for(int i = 0; i<r; i++){

            int id, sub;
            cin>>id>>sub;

            // v[id][sub]+=1;

            // if(v[id][sub]>1){
            //     check = false;
            //     break;
            // }

            mp[{id,sub}]++;
            if(mp[{id,sub}]>1) check = false;
        }

        cout<<"Scenario #"<<temp-t<<": ";
        (check)? cout<<"possible" : cout<<"impossible";
        cout<<'\n';

    }


    return 0;
}