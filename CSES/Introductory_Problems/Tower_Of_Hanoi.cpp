#include<bits/stdc++.h>
using namespace std;

vector<string>ans;

long long helper(int s, int h, int d, int n){
    if(n==1){
        //cout<<s<<" "<<d<<endl;
        ans.push_back(to_string(s)+" "+to_string(d));
        return 1;
    }

    long long count = 1;
    count+=helper(s,d,h,n-1);
    ans.push_back(to_string(s)+" "+to_string(d));
    count+=helper(h,s,d,n-1);

    return count;
}

int main(){

    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin>>n;

    long long an = helper(1,2,3,n);

    cout<<an<<endl;

    for(auto it: ans) cout<<it<<endl;
    return 0;
}