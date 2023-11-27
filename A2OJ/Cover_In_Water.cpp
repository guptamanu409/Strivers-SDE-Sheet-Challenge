#include<bits/stdc++.h>
using namespace std;

int main(){

    int t;
    cin>>t;

    while(t--){
        int n;
        cin>>n;

        char ch[n];
        int maxi = INT_MIN;
        int cnt = 0;
        int h = 0;
        for(int i = 0; i<n; i++){
            char x;
            cin>>x;
            if(x=='.'){
                cnt++;
                maxi = max(maxi,cnt);
            }
            else{
                h++;
                cnt = 0;
            }
        }

        if(maxi>=3) cout<<2<<endl;
        else{
            cout<<n-h<<endl;
        }
    }

    return 0;
}