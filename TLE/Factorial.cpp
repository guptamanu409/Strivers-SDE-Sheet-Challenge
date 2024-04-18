#include<bits/stdc++.h>
using namespace std;

long long solve(long long n){
    if(n<=1) return 1;
    return solve(n-1)*n;
}

int main(){

    cin.tie(NULL);
    ios::sync_with_stdio(false);

    int n;
    cin>>n;
    cout<<solve(n);


    return 0;
}