#include<bits/stdc++.h>
using namespace std;

int main(){

    ios::sync_with_stdio(false);
    cin.tie(NULL);

    string s;
    cin>>s;

    int n = s.size();
    int maxi = INT_MIN;
    int cnt = 1;
    for(int i = 0; i<n-1; i++){
        if(s[i]==s[i+1]) cnt++;
        else{
            maxi = max(maxi,cnt);
            cnt = 1;
        }
    }

    cout<<max(maxi,cnt)<<endl;


}