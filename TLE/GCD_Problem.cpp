#include<bits/stdc++.h>
using namespace std;

vector<int>v(1001,1);
void seive(){
    v[0] = 0;
    v[1] = 0;
    for(int i = 2; i<=1000; i++){
        if(v[i]){
            // primes.push_back(i);
            int p = i*i;
            while(p<=1000){
                v[p] = 0;
                p+=i;
            }
        }
    }
}

int main(){

    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin>>t;

    while(t--){

        long long n;
        cin>>n;
        long long cnt = 3;
        while(true){
            long long bada = n - cnt;
            long long rem = n - bada;
            if(((bada&1)==0) && (((rem-1)&1)==0)) cnt+=3;
            else if((bada&1) && ((rem-1)&1)){
                if(bada%(rem-1)!=0){
                    cout<<rem-1<<" "<<bada<<" "<<1<<'\n';
                    break;
                }
                else cnt+=3;
            }
            else if(bada%(rem-1)!=0){
                cout<<rem-1<<" "<<bada<<" "<<1<<'\n';
                break;
            }
            else cnt+=3;
        }

    }
}