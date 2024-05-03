#include<bits/stdc++.h>
using namespace std;

int main(){

    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin>>t;

    while(t--){

        // cout<<1001%501;
        int n;
        cin>>n;
        n--;    
        vector<long long>v(n,0);
        long long maxi = INT_MIN;
        for(auto &it:v)cin>>it;
        
        long long start = v[0]+1;
        start = *max_element(v.begin(),v.end());
        start+=(v[0]+1);
        cout<<start<<" ";

        for(int i = 0; i<v.size(); i++){
            start+=v[i];
            cout<<start<<" ";
        }

        // int i = 0;
        // while(i<n){
        //     if((i+1)<n){
        //         start = start*v[i+1];
        //         start+=v[i];
        //         i++;
        //         cout<<start<<" ";
        //     }
        //     else {
        //         cout<<start+v[i];
        //         i++;
        //     }
        // }
        cout<<'\n';
    }


    return 0;
}