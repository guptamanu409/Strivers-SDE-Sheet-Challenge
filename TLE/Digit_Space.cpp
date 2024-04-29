#include <bits/stdc++.h>
using namespace std;

vector<long long>seive(1e7+1,1);
vector<long long>prime(1e7+1,0);

void compu(){
    iota(prime.begin(),prime.end(),0);
    for(int i = 2; i<=1e7; i++){
        if(seive[i]){
            for(int j = i+i; j<=1e7; j+=i){
                seive[j] = 0;
                prime[j] = i; // uska maximum prime divisor
            }
        }
    }    
}

void helper(int n, set<int>&m){
    while(n!=1){
        m.insert(prime[n]);
        n = n/prime[n];
    }
}

int main() {
	// your code goes here
    compu();

    // for(auto &it:prime)cout<<it<<" ";
    int t;
    cin>>t;
    
    while(t--){
        int x,y;
        cin>>x>>y;
        string a,b;
        a = to_string(x);
        b = to_string(y);
        // cout<<a<<" "<<b<<'\n';
        sort(a.begin(),a.end());
        sort(b.begin(),b.end());
        set<int>a1,b1;
        
        do{
            if(a[0]!='0'){
                // cout<<prime[stoi(a)]<<'\n';
                // a1.insert(prime[stoi(a)]);
                helper(stoi(a),a1);
            }
        }while(next_permutation(a.begin(),a.end()));
        
        do{
            if(b[0]!='0'){
                // cout<<prime[stoi(b)]<<'\n';
                // b1.insert(prime[stoi(b)]);
                helper(stoi(b),b1);
            }
        }while(next_permutation(b.begin(),b.end()));
        
        int ans = 1;
        for(auto &it:a1){
            if(b1.count(it)!=0){
                ans = max(it,ans);
                // break;
            }
        }
        cout<<ans<<'\n';

        // for(auto &it:a1) cout<<it<<" ";
        // cout<<'\n';
        // for(auto &it:b1) cout<<it<<" ";
    }

    // return 0;
}
