#include<bits/stdc++.h>
using namespace std;

int main(){

    ios::sync_with_stdio(false);
    cin.tie(NULL);


    int n;
    cin>>n;

    int sum = 0;
    for(int i = 0; i<n; i++){
        int x;
        cin>>x;
        sum+=x;
    }

    int ans = 0;
    for(int i = 1; i<=5; i++){
        int val = sum+i;
        if((val%(n+1)==0) || (val%(n+1)!=1)) ans++;
    }

    cout<<ans<<endl;

    return 0;
}