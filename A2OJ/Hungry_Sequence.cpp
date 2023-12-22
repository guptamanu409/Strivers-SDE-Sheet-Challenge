#include<bits/stdc++.h>
using namespace std;

#define m (int)1e7

bool seive[m+1] = {0};


int main(){

    long long n = 1e14;
    long long cnt = 0;
    seive[0] = seive[1] = true;
    for(long long i = 2; (long long)(i*i)<=n; i++){
        if(!seive[i]){
            cnt++;
            for(int j = i*i; j<=n; j+=i){
                seive[j] = true;
            }
        }
    }

    cout<<cnt;

    return 0;
}