#include<bits/stdc++.h>
using namespace std;

int main(){

    ios::sync_with_stdio(false);
    cin.tie(NULL);


    int t;
    cin>>t;

    while(t--){


        int x,y;
        cin>>x>>y;

        if((x==0) && (y==0)) cout<<0<<'\n';
        else if(y==0){
            long long ans = x/15;
            ans+= ((x%15)!=0);
            cout<<ans<<'\n'; 
        }
        else if(x==0){
            long long ceil = (y+1)/2;
            cout<<ceil<<'\n';
        }
        else{
            long long ceil = (y+1)/2;
            long long tc = ceil*15;
            tc-= (y*4);
            if(x<=tc) cout<<ceil<<'\n';
            else{
                tc = x - tc;
                ceil+= (tc/15);
                ceil+= ((tc%15)!=0);
                cout<<ceil<<'\n';
            }
        }
    }



    return 0;
}