#include<bits/stdc++.h>
using namespace std;

int main(){

    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin>>t;

    while(t--){

        int n;
        cin>>n;

        int sum = 0;
        while(n--){
            int x;
            cin>>x;
            sum+=abs(x);
        }

        cout<<sum<<'\n';
    }

    return 0;
}