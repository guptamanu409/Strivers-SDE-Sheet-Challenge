#include<bits/stdc++.h>
using namespace std;

int helper()

int main(){

    ios::sync_with_stdio(false);
    cin.tie(NULL);

    vector<string>s;

    for(int i = 0; i<=20; i++){
        string ss;
        cin>>ss;
        s.push_back(ss);
    }

    int maxi = INT_MIN;
    for(int i = 0; i<=16; i++){
        for(int j = 0; j<=16; j++){
            maxi = max(maxi,helper(s,i,j));
        }
    }

    return 0;
}