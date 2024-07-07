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

        vector<int>bits(30,0);

        for(int i = 29; i>=0; i--){

            for(auto &it:v){
                if(it&(1<<i)) bits[i]++;
            }
        }

        for(int i = 1; i<=n; i++){
            bool check = true;
            for(auto &it:bits){
                if(it%i != 0){
                    check = false;
                    break;
                }
            }
            if(check) cout<<i<<" ";
        }
        cout<<'\n';
    }



    return 0;
}