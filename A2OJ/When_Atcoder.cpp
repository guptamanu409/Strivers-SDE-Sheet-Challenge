#include<bits/stdc++.h>
using namespace std;

void solve(int k){
    //cin>>k;

    if(k>=0 && k<=9) cout<<21<<":0"<<k<<'\n';
    else if(k>=10 && k<=59) cout<<21<<":"<<k<<'\n';
    else if(k==60) cout<<22<<":00"<<'\n';
    else if(k>=61 && k<=69) cout<<22<<":0"<<(k-60)<<'\n';
    else cout<<22<<":"<<(k-60)<<'\n';
}

int main(){

    int k;
    cin>>k;

    // for(int i = 0; i<=100; i++) solve(i);

    if(k>=0 && k<=9) cout<<21<<":0"<<k<<'\n';
    else if(k>=10 && k<=59) cout<<21<<":"<<k<<'\n';
    else if(k==60) cout<<22<<":00"<<'\n';
    else if(k>=61 && k<=69) cout<<22<<":0"<<(k-60)<<'\n';
    else cout<<22<<":"<<(k-60)<<'\n';


    return 0;
}