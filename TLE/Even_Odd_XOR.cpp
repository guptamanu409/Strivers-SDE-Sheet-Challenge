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

        if(n==3) cout<<"1"<<" "<<"2"<<" "<<"3"<<'\n';
        else{
            // int temp = (n&1)? n-1 : n;
            int half = n/2;
            vector<int>even,odd;
            int cnt = 2;
            while(half!=0){
                even.push_back(cnt);
                even.push_back(cnt+1);
                cnt+=2;
                --half;
            }

            if(((n/2)&1)==0){
                for(auto &it:even) cout<<it<<" ";
                // cout<<'\n';
            }
            else{
                int tt = even.size();
                even[tt-1] = (even[tt-1]|(1<<30));
                even[tt-1] = (even[tt-1]^1);
                even[tt-3] = (even[tt-3]|(1<<30));
                for(auto &it:even) cout<<it<<" ";
                
            }
            if(n&1)cout<<"0";
            cout<<'\n';

        }

    }

    return 0;
}