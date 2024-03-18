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

        if(a%b==0) cout<<0<<'\n';
        else{
            if(a<b) cout<<b-a<<'\n';
            else{
                long long quo = a/b;
                long long next_multiple = (quo+1) * b;
                cout<<next_multiple - a<<'\n';
            }
        }
    }

    return 0;
}