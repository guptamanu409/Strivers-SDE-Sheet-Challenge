#include<bits/stdc++.h>
using namespace std;

int main(){

    int m,n;
    cin>>m>>n;

    vector<int>v;

    for(int i = 0; i<m; i++){
        int x;
        cin>>x;
        if(x<=0) v.push_back(abs(x));
    }

    int cnt = 0;
    long long sum = 0;

    sort(v.begin(),v.end());

    int x = v.size();

    for(int i = x-1; i>=0; i--){
        sum+=v[i];
        cnt++;
        if(cnt>=n)break;
    }

    cout<<sum<<endl;

    return 0;
}