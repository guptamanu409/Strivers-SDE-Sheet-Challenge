#include<bits/stdc++.h>
using namespace std;

int main(){

    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin>>t;

    while(t--){

        int n,a,b;
        cin>>n>>a>>b;

        if(b>a)swap(a,b);

        int ans = 0;
        bool check = true;
        for(int i = n-1; i>=0; i--){
            int a1 = (a&(1<<i));
            int b1 = (b&(1<<i));

            if(a1==b1){
                if(a1==0) ans = (ans|(1<<i));
            }
            else{
                if(check) check = false;
                else{
                    if(!b1) ans = (ans|(1<<i));
                }
            }

        }

        cout<<ans<<'\n';
    }


    return 0;
}