#include<bits/stdc++.h>
using namespace std;

int main(){

    int n;
    cin>>n;

    vector<int>arr(n,0);
    unordered_map<int,int>mp;

    for(int i = 0; i<n; i++){
        cin>>arr[i];
        mp[arr[i]]++;
    }

    // if(n==1 || mp.size()==n || mp.size()>(n/2)) cout<<"YES"<<endl;
    // else if(mp.size()<(n/2) || ((n&1) && (mp.size()==n/2))) cout<<"NO"<<endl;

    //if any number is occuring more than n+1/2 time than it's not possible to create an answer
    int key = (n+1)/2;
    for(auto &it:mp){
        if(it.second>key){
            cout<<"NO"<<endl;
            return 0;
        }
    }

    cout<<"YES"<<endl;
    return 0;
}