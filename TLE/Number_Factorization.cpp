#include<bits/stdc++.h>
using namespace std;

int main(){

    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin>>t;

    while(t--){

        int n;
        cin>>n;
        unordered_map<int,int>umm;
        int mini = INT_MIN;

        for(long long i = 2; (long long)(i*i)<=n; i++){
            if(n%i==0){
                int cnt = 0;
                while(n%i==0){
                    ++cnt;
                    n = n/i;
                }
                umm[i] = cnt;
                mini = max(mini,cnt);
            }
        }
        if(n>1) {
            umm[n]++;
            // mini = 1;
            mini = max(mini,1);
        }

        

        bool check = true;
        long long ans = 0;
        
        for(int i = 1; i<=mini; i++){
            long long temp = 1;
            for(auto &it:umm){
                if(it.second!=0){
                    it.second--;
                    temp*=it.first;
                }
            }
            ans+=temp;
        }

        cout<<ans<<'\n';
    }



    return 0;
}