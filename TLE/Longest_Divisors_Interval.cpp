#include<bits/stdc++.h>
using namespace std;

int main(){

    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin>>t;

    while(t--){

        long long n;
        cin>>n;

        int c = 0;

        for(int i = 1; i<=50; i++){
            if(n%i==0) c++;
            else break;
        }

        cout<<c<<'\n';
    }


    return 0;
}