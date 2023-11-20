#include<bits/stdc++.h>
using namespace std;

int main(){

    int n,m;
    cin>>n>>m;

    long long sum = 0;

    long long prev;
    cin>>prev;

    sum = prev-1;

    for(int i = 1; i<m; i++){
        long long curr;
        cin>>curr;

        if(curr>prev){
            sum+=(long long)(curr-prev);
            prev = curr;
        }

        else if(curr<prev){
            sum+=(long long)((long long)n-prev+1);
            sum+=(long long)(curr-1);
            prev = curr;
        }

        else continue;
    }

    cout<<sum<<endl;

    return 0;
}