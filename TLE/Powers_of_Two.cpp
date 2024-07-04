#include<bits/stdc++.h>
using namespace std;

bool helper(int n, int k, int b, vector<int>&ele){
    if((n==0) || (k==0)){
        return ((n==0) && (k==0));
    }

    for(int i = b; i>=0; i--){
        bool check = false;
        if(n>=(1<<i)){
            ele.push_back((1<<i));
            check = helper(n-(1<<i), k-1,i,ele);
            if(check) return true;
            ele.pop_back();
        }
    }

    return false;
}

int main(){

    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n,k;
    cin>>n>>k;

    if(k==n){
        cout<<"YES"<<'\n';
        for(int i = 1; i<=n; i++) cout<<"1 ";
        cout<<'\n';
    }
    else if(k>n) cout<<"NO"<<'\n';
    else{
        int tt = n;
        int cnt = 0, pos = 0;
        vector<int>ele;
        while(tt){
            if(tt&1){
                cnt++;
                ele.push_back((1<<pos));
            } // pos = cnt;
            tt = tt>>1;
            pos++;
        }
        if(k<cnt) cout<<"NO"<<'\n';
        else{
            // bool check = false;
            int i = 0;
            while(i<ele.size() && (ele.size()!=k)){
                if(ele[i]!=1){
                    ele[i] = ele[i]/2;
                    ele.push_back(ele[i]);
                    // if(ele.size()==k){
                    //     check = true;
                    //     break;
                    // }
                }
                else i++;
            }
            if(ele.size()==k){
                cout<<"YES"<<'\n';
                for(auto &it:ele) cout<<it<<" ";
            }
            else cout<<"NO";
            cout<<'\n';
        }
        // if(helper(n,k,pos,ele)){
        //     cout<<"YES"<<'\n';
        //     for(auto &it:ele) cout<<it<<" ";
        // }
        // else cout<<"NO";
        // cout<<'\n';
    }


    return 0;
}