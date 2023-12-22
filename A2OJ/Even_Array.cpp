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

        vector<int>arr(n,0);
        bool check = true;
        int zero = 0, one = 0, iz = 0, io = 0;
        for(int i = 0; i<n; i++){
            cin>>arr[i];

            if(((arr[i]&1)==0) && ((i&1)==0)) zero++;
            else if((arr[i]&1) && (i&1)) one++;
            else if((arr[i]&1) && ((i&1)==0)){
                io++;
                check = false;
            }
            else if(((arr[i]&1)==0) && (i&1)){
                iz++;
                check = false;
            }

        }

        if(check) cout<<0<<endl;
        else if(iz==io) cout<<iz<<endl;
        else cout<<-1<<endl;
    }

    return 0;
}