#include<bits/stdc++.h>
using namespace std;

int main(){

    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin>>t;

    while(t--){

        int a,b;
        cin>>a>>b;

        if(b>a) swap(a,b);

        int x = 0;
        bool check = true;
        for(int i = 29; i>=0; i--){
            int a1 = (a&(1<<i));
            int b1 = (b&(1<<i));

            if(a1==b1) continue;
            else{
                if(check) check = false;
                else{
                    if(!b1) x = (x|(1<<i));
                }
            }
        }

        cout<<x<<'\n';
    }


    return 0;
}