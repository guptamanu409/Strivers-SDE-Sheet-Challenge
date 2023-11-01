#include<bits/stdc++.h>
using namespace std;

int main(){

    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin>>t;

    while(t--){

        long long x, y;
        cin>>x>>y;

        if(x>=y){
            if((x&1)==0) cout<<(long long)(x*x) - (y-1)<<endl;
            else cout<<(long long)((x-1)*(x-1)) + y<<endl;
        }

        else{
            if((y&1)==0) cout<<(long long)((y-1)*(y-1)) + x <<endl;
            else cout<<(long long)(y*y) - (x-1)<<endl;
        }


    }

    return 0;
}