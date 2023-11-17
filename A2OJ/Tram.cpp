#include<bits/stdc++.h>
using namespace std;

int main(){

    int n;
    cin>>n;

    int maxi = INT_MIN;

    int ans = 0;
    while(n--){
        int x,y;
        cin>>x>>y;
        ans-=x;
        ans+=y;
        maxi = max(maxi,ans);
    }

    cout<<maxi<<endl;

    return 0;
}