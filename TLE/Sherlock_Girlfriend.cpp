#include<bits/stdc++.h>
using namespace std;

int main(){

    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin>>n;

    if(n==1){
        cout<<1<<'\n'<<1<<'\n';
    }
    else if(n==2){
        cout<<1<<'\n';
        cout<<1<<" "<<1<<'\n';
    }
    else{
        vector<int>seive(n+2,1);
        for(int i = 2; i*i<=n+1; i++){
            if(seive[i]){
                for(int j = i*i; j<=n+1; j+=i){
                    seive[j] = 0;
                }
            }
        }
        cout<<2<<'\n';
        for(int i = 2; i<=n+1; i++){
            if(seive[i]) cout<<1<<" ";
            else cout<<2<<" ";
        }
        cout<<'\n';
    }
    



    return 0;
}