#include<bits/stdc++.h>
using namespace std;

int main(){

    int k;
    cin>>k;

    vector<int>v(12,0);

    for(auto &it:v) cin>>it;

    if(k==0){
        cout<<0<<endl;
        return 0;
    }

    sort(v.begin(),v.end());
    int cnt = 0;
    int sum = 0;
    bool check = false;
    for(int i = 11; i>=0; i--){
        sum+=v[i];
        cnt++;
        if(sum>=k){
            check = true;
            break;
        }
    }

    (check)? cout<<cnt<<endl : cout<<-1<<endl;

    return 0;
}