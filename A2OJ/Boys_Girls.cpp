#include<bits/stdc++.h>
using namespace std;

int main(){

    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    int n,m;
    cin>>n>>m;

    while(n>0 && m>0){
        if(m>=n) cout<<'G'<<'B';
        else cout<<'B'<<'G';
        --n,--m;
    }

    while(n--) cout<<'B';
    while(m--) cout<<'G';
    cout<<endl;

    return 0;
}