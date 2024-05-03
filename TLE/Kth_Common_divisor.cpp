#include<bits/stdc++.h>
using namespace std;

vector<vector<int>>v(101);

void compu(){

    for(int i = 1; i<=100; i++) v[i].push_back(1);

    for(int i = 2; i<=100; i++){
        v[i].push_back(i);
        for(int j = i+i; j<=100; j+=i){
            v[j].push_back(i);
        }
    }
}

int main(){

    // compu();

    int a,b,k;
    cin>>a>>b>>k;

    // cout<<v[a][k-1]<<'\n';
    int cnt = 0;
    for(int i = min(a,b); i>=1; i--){
        cnt+= (((a%i)==0) && ((b%i)==0));
        if(cnt>=k){
            cout<<i<<'\n';
            break;
        }
    }

    return 0;
}