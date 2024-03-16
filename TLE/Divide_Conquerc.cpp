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

        long long odd = INT_MAX, even = INT_MAX;
        long long sum = 0;
        vector<long long>v;


        for(int i = 0; i<n; i++){
            long long x;
            cin>>x;
            sum+=x;
            v.push_back(x);
            // if(x&1) odd = min(odd,x);
            // else even = min(x,even);
        }
        if((sum&1)==0) cout<<0<<'\n';
        else{
            long long oc = 0, ev = INT_MAX;
            long long mini = INT_MAX;
            for(int i = 0; i<n; i++){
                oc = 0, ev = 0;
                if(v[i]&1){
                    while((v[i]%2)!=0){
                        v[i] = v[i]/2;
                        oc++;
                    }
                    mini = min(mini,oc);
                }
                else{
                    while((v[i]%2)!=1){
                        v[i] = v[i]/2;
                        ev++;
                    }
                    mini = min(mini,ev);
                }
                
            }
            
            // if(even!=INT_MAX){
            //     ev = 0;
            //     while((even%2)!=1){
            //         ev++;
            //         even = even/2;
            //     }
            // }
            // cout<<min(oc,ev)<<'\n';
            cout<<mini<<'\n';
        }
    }

    return 0;
}