#include<bits/stdc++.h>
using namespace std;

int main(){

    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin>>n;

    int temp = n-1;
    int xr = 0;
    while(temp--){
        int x;
        cin>>x;
        xr = xr^x;
    }

    for(int i = 1; i<=n; i++){
        xr = xr ^ i;
    }

    cout<<xr<<endl;

    return 0;
}