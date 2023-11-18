#include<bits/stdc++.h>
using namespace std;

int main(){

    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin>>t;

    while(t--){
        int x;
        cin>>x;

        if(x%3==0) cout<<"Second"<<endl;
        else cout<<"First"<<endl;
    }
}