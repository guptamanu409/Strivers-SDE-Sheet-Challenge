#include<bits/stdc++.h>
using namespace std;

// long long helper(vector<long long>&v, long long val){

//     long long n = v.size();
//     for(long long i = 0; i<n; i++){
//         if(v[i]==val) return i;
//     }

//     // Dummy statement
//     return 0;
// }

int main(){

    ios::sync_with_stdio(false);
    cin.tie(NULL);

    long long n;
    cin>>n;

    vector<long long>arr(n,0);
    vector<long long>pos(n+1,0);
    for(long long i = 0; i<n; i++){
        // int x;
        // cin>>x;
        // arr.push_back(x);
        cin>>arr[i];
        pos[arr[i]] = i+1; // left to right ..... Vasya ka Answer
    }

    long long m;
    cin>>m;

    
    long long vas = 0, pet = 0;

    for(int i = 0; i<m; i++){
        int x;
        cin>>x;

        vas+=pos[x];
        pet+=n-(pos[x]-1);
    }
    
    cout<<vas<<" "<<pet<<endl;
    
    
    
    
    
    
    
    //vector<long long>q(m,0);
    /*
    for(long long i = 0; i<m; i++){
        // int x;
        // cin>>x;
        // q.push_back(x);
        cin>>q[i];
    }
    */
    
    
    
    //           Vasya  Petya
    /*
    map<long long,pair<long long,long long>>mp;
    long long vas = 0, pet = 0;
    for(long long i = 0; i<m; i++){
        long long val = q[i];
        if(mp.find(val)!=mp.end()){
            vas+= mp[val].first;
            pet+=mp[val].second;
        }
        else{
            int ans = helper(arr,val);
            vas+=ans+1;
            pet+=n-ans;
            mp[val] = {ans+1,n-ans};
        }
    }
    
    cout<<vas<<" "<<pet<<endl;
    */


    return 0;
}