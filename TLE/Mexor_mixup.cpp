#include<bits/stdc++.h>
using namespace std;

#define n 3e5
vector<int>pre_xor(n,0);
void precompu(){

    for(int i = 1; i<n; i++) pre_xor[i] = pre_xor[i-1] ^ i;
}

int main(){

    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin>>t;
    precompu();
    while(t--){

        int a,b;
        cin>>a>>b;

        
        int xorr = pre_xor[a-1];
        // for(int i = 0; i<a; i++) xorr = xorr^i;

        if(xorr==b) cout<<a<<'\n';
        else{
            if((xorr^b)!=a) cout<<a+1<<'\n';
            else cout<<a+2<<'\n';
        }
    }


    return 0;
}