#include<bits/stdc++.h>
using namespace std;

int main(){

    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin>>t;

    while(t--){


        long long a,b;
        cin>>a>>b;

        // if(a>b){
        //     a = a^b;
        //     b = a^b;
        //     a = a^b;
        // }

        cout<<(a^b)<<'\n';
    }

    return 0;
}