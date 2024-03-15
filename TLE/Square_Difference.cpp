#include<bits/stdc++.h>
using namespace std;

long long helper(long long a, long long b){
    long long sum = a+b;

    for(long long i = 2; (long long)i*i<=sum; i++){
        if(sum%i==0) return 0;
    }
    return 1;
}

int main(){

    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin>>t;

    while(t--){

        long long a,b;
        cin>>a>>b;

        if((long long)(a-b)==1){
            (helper(a,b))? cout<<"YES"<<'\n' : cout<<"NO"<<'\n';
        }
        else cout<<"NO"<<'\n';
        
    }

    return 0;
}