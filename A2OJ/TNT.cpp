#include<bits/stdc++.h>
using namespace std;

int main(){

    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin>>t;

    while(t--){

        long long n;
        cin>>n;

        vector<long long>v;
        vector<long long>prefix(n,0);
        long long sum = 0;
        long long maxi = INT_MIN, mini = INT_MAX;
        for(int i = 0; i<n; i++){
            long long x;
            cin>>x;
            sum+=x;
            prefix[i] = sum;
            maxi = max(maxi,x);
            mini = min(mini,x);
            v.push_back(x);
        }

        if(n==1 || (maxi==mini)) cout<<0<<endl;

        else{
            long long half = n/2;

            long long ans = maxi-mini;

            for(long long i = 2; i<=half; i++){
                if(n%i==0){

                    long long mi = prefix[i-1],ni = prefix[i-1];
                    for(int j = i-1+i; j<n; j+=i){
                        long long val = prefix[j] - prefix[j-i];
                        mi = max(mi,val);
                        ni = min(ni,val);
                    }
                    ans = max(ans,mi-ni);
                }
            }
            cout<<ans<<endl;
        }
    }

    return 0;
}