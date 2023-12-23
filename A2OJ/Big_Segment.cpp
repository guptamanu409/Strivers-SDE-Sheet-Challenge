#include<bits/stdc++.h>
using namespace std;

int main(){

    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin>>n;

    long long a = 0,b = 0,maxi = INT_MIN;
    int ans = -1;
    vector<pair<long long, long long>>arr;
    for(int i = 0; i<n; i++){
        long long x,y;
        cin>>x>>y;

        if(y-x+1>maxi){
            maxi = y-x+1;
            ans = i+1;
            a = x;
            b = y;
        }
        arr.push_back({x,y});
    }

    bool check = true;

    for(auto &it:arr){
        if(it.first<a || it.second>b){
            check = false;
            break;
        }
    }

    (check)? cout<<ans<<endl : cout<<-1<<endl;

    return 0;
}