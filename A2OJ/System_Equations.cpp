#include<bits/stdc++.h>
using namespace std;

int main(){

    int n,m;
    cin>>n>>m;

    int ans = 0;

    for(int i = 0; i*i<=n; i++){
        for(int j = 0; j*j<=m; j++){
            int a,b;
            a = i;
            b = j;
            if(((a*a)+b==n) && (a+(b*b)==m)) ans++;
        }
    }

    cout<<ans<<endl;

    return 0;
}