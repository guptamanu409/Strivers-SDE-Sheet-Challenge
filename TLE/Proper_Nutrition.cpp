#include<bits/stdc++.h>
using namespace std;

int main(){

    ios::sync_with_stdio(false);
    cin.tie(NULL);

    long long n,a,b;

    cin>>n>>a>>b;

    if((n%a)==0) cout<<"YES"<<'\n'<<n/a<<" "<<0;
    else if((n%b)==0) cout<<"YES"<<'\n'<<0<<" "<<n/b;
    else{
        bool check = true;
        for(long long i = 1; i<=1e7; i++){
            if((b*i)>n){
                // check = false;
                cout<<"NO";
                break;
            }
            else{
                long long temp = b*i;
                temp = n - temp;
                if((temp%a)==0){
                    cout<<"YES"<<'\n'<<temp/a<<" "<<i;
                    break;
                }
            }
        }
    }

    return 0;
}