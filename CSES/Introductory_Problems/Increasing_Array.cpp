#include<bits/stdc++.h>
using namespace std;

int main(){

    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin>>n;

    long long maxi = INT_MIN;
    long long moves = 0;
    while(n--){
        long long x; 
        cin>>x;
        maxi = max(maxi,x);
        moves+= maxi - x;
    }
    cout<<moves<<endl;


}