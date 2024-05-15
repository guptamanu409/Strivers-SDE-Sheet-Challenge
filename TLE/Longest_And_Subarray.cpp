#include<bits/stdc++.h>
using namespace std;

vector<long long>v;
map<long long, long long>mp;
long long b_e(long long a, long long b){

    long long ans = 1;
    while(b){
        if(b&1) ans = ans * a;

        a = a*a;
        b = b>>1;
    }

    return ans;
}

void compu(){
    mp[2] = 1;
    v.push_back(2);
    long long prev = 2;
    for(int i = 2; i<=30; i++){
        long long curr = b_e(2,i);  
        v.push_back(curr);
        mp[curr] = curr - prev;
        prev = curr;
    }
}

int main(){

    ios::sync_with_stdio(false);
    cin.tie(NULL);

    compu();

    int t;
    cin>>t;

    while(t--){

        long long n;
        cin>>n;
        
        if(n<=2) cout<<1<<'\n';
        else{
            int pos = lower_bound(v.begin(),v.end(),n) - v.begin();
            if(v[pos]==n) cout<<mp[n]<<'\n';
            else{
                cout<<max((int)(mp[v[pos-1]]),(int)((n-v[pos-1])+1))<<'\n';
            }
        }
        

    }

    return 0;
}