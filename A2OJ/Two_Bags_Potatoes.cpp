#include<bits/stdc++.h>
using namespace std;

int main(){

    long long y,k,n;

    cin>>y>>k>>n;

    if(k>n || n-y==0 || y>n) cout<<-1<<endl;
    else{
        bool check = false;
        //long long x = n-y;
        for(long long i = k; i<=n; i+=k){
            if(i>y){
                cout<<(long long)(i-y)<<" ";
                check = true;
            }
        }
        if(!check) cout<<-1;
        cout<<endl;
    }

    return 0;
}