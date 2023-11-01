#include<bits/stdc++.h>
using namespace std;

int main(){

    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin>>n;

    if(n==1) cout<<1<<endl;

    if(n<=3) cout<<"NO SOLUTION"<<endl;

    if(n&1){
        for(int i = n-1; i>0; i-=2) cout<<i<<" ";
        for(int i = n; i>0; i-=2) cout<<i<<" ";
        cout<<endl;
    }

    else{
        for(int i = 2; i<=n; i+=2) cout<<i<<" ";
        for(int i = 1; i<=n; i+=2) cout<<i<<" ";
        cout<<endl;
    }


}