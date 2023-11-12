#include<bits/stdc++.h>
using namespace std;


int main(){

    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin>>n;

    //2^n aa jaega
    long long value = (long long)(1<<n);

    for(long long i = 0; i<value; i++){
        vector<long long>k(n,0);
        int j = n-1;
        long long temp = i ^ (i>>1);
        while(temp>0){
            if(temp&1) k[j] = 1;
            j--;
            temp = temp>>1;
        }
        for(auto it:k) cout<<it;
        cout<<endl;

    }
}