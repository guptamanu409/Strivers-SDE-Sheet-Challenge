#include<bits/stdc++.h>
using namespace std;

int main(){

    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin>>t;

    while(t--){

        string x,y;
        cin>>x>>y;

        int i = y.size()-1;
        while(i>=0){
            if(y[i]=='1') break;
            i--;
        }

        int cnt = 0;
        i = y.size()-i;
        i = x.size()-i;

        while(x[i]!='1'){
            ++cnt;
            i--;
        }
        cout<<cnt<<'\n';
    }


    return 0;
}