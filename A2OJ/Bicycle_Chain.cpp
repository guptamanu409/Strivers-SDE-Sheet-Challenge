#include<bits/stdc++.h>
using namespace std;

int main(){

    int n,m;
    cin>>n;

    vector<int>v;

    for(int i = 0; i<n; i++){
        int x;
        cin>>x;
        v.push_back(x);
    }

    cin>>m;

    vector<int>vv;

    for(int i = 0; i<m; i++){
        int x;
        cin>>x;
        vv.push_back(x);
    }

    int maxi = INT_MIN;
    int cnt = 0;

    for(int i = 0; i<n; i++){
        for(int j = 0; j<m; j++){
            int val = (vv[j]%v[i]==0)? (vv[j]/v[i]) : 0;
            //cout<<val<<" ";
            if(val>=maxi){
                if(val==maxi)cnt++;
                else{
                    maxi = val;
                    cnt = 1;
                }
            }
        }
    }

    cout<<cnt<<endl;


    return 0;
}