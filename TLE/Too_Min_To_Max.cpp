#include<bits/stdc++.h>
using namespace std;

#define endl '\n'

int main(){

    ios::sync_with_stdio(false);
    cin.tie(NULL);

    // freopen("input.txt","r",stdin);
    // freopen("output.txt","w",stdout);

    int t;
    cin>>t;

    while(t--){

        int n;
        cin>>n;

        vector<long long>a(n);

        for(auto &it:a) cin>>it;
        long long ans = 0;
        // for(int i = 0; i<n; i++){
        //     for(int j = i+1; j<n; j++){
        //         for(int k = j+1; k<n; k++){
        //             for(int l = k+1; l<n; l++){
        //                 long long sum = 0;
        //                 sum+= abs(a[i]-a[j]);
        //                 sum+= abs(a[j]-a[k]);
        //                 sum+= abs(a[k]-a[l]);
        //                 sum+= abs(a[l]-a[i]);
        //                 ans = max(ans,sum);
        //             }
        //         }
        //     }
        // }

        sort(a.begin(),a.end());

        ans+=abs(a[0]-a[n-2]);
        ans+=abs(a[n-2]-a[1]);
        ans+=abs(a[1]-a[n-1]);
        ans+=abs(a[n-1]-a[0]);
        cout<<ans<<endl;
    }

    return 0;
}