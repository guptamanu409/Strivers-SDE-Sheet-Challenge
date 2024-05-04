#include<bits/stdc++.h>
using namespace std;

int main(){

    int gcd = 0;

    int n;
    cin>>n;

    int mini = INT_MAX, maxi = INT_MIN;

    vector<int>v(n,0);
    for(auto &it:v){
        cin>>it;
        mini = min(mini,it);
        maxi = max(maxi,it);
        gcd = __gcd(gcd,it);
    }

    if(maxi==mini)cout<<0<<'\n';
    else{
        int cnt = 0;
        for(auto &it:v){
            int rem = it/gcd;
            while(rem%2==0) rem = rem/2, cnt++;
            while(rem%3==0) rem = rem/3, cnt++;
            if(rem>1) {
                // cout<<-1<<'n';
                cnt = -1;
                break;
            }
        }
        cout<<cnt<<'\n';
    }


    return 0;
}