#include<bits/stdc++.h>
using namespace std;

long long gcd(long long a, long long b){
    if(b==0) return a;
    return gcd(b,a%b);
}

int main(){

    long long a,b;
    cin>>a>>b;

    if(max(b,a)-min(a,b)==1) cout<<1<<'\n';
    else{
        long long cur = gcd(a,b);
        long long half = (max(a,b)/2);
        if(half>=min(a,b))cout<<max(cur,half)<<'\n';
        else{
            bool check = false;
            while(half>cur){
                long long cnt = 1;
                long long t = half;
                while(t<min(a,b)){
                    t = half*cnt;
                    cnt++;
                }
                if((half*cnt)<=max(a,b)){
                    cout<<max(cur,half)<<'\n';
                    check = true;
                    break;
                }
                // half = half>>1;
                half--;
            }
            if(!check) cout<<cur<<'\n';
            
        }
        // while(half>0){
            
        // }
    }



    return 0;
}