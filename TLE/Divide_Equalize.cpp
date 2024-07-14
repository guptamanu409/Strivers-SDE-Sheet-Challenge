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

        unordered_map<int,int>umm;

        for(auto &it:v){
            int tt = it;
            for(int i = 2; i*i<=tt; i++){
                if(tt%i==0){
                    while(tt%i==0){
                        umm[i]++;
                        tt = tt/i;
                    }
                    
                }
            }
            if(tt>1) umm[tt]++;
        }
        bool check = true;
        for(auto &it:umm){
            if(it.second%n != 0){
                check = false;
                break;
            }
        }
        (check)? cout<<"YES"<<'\n' : cout<<"NO"<<'\n';
    }


    return 0;
}