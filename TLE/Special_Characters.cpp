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

        if(n&1) cout<<"NO"<<'\n';
        else{
            // int cnt = 0;
            // for(int i = 0; i<n; i++){
            //     cout
            // }
            int cnt = 0;
            cout<<"YES"<<'\n';
            n = n/2;
            while(n--){
                cout<<(char)(65+cnt);
                cout<<(char)(65+cnt);
                cnt++;
            }
            cout<<'\n';
        }
    }


    return 0;
}