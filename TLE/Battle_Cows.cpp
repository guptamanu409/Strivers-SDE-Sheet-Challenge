#include<bits/stdc++.h>
using namespace std;

#define endl '\n'
#define prime 999999997  //Largest Prime number before 1e9


// int n,m;
// cin>>n>>m;

// Array of vectors
// vector<int>cols[m]; // Rows fixed hai, columns dynamic hai
// for(auto &it:cols) cout<<cols<<" ";

// No need to initialize the above rows... we can directly access it 

// for(int i = 0; i<n; i++){
//     for(int j = 0; j<m; j++){
//         int x;
//         cin>>x;
//         // cols[j].push_back(x);
//         cols[j].push_back(x);
//     }
// }

int main(){

    ios::sync_with_stdio(false);
    cin.tie(NULL);

    // freopen("input.txt","r",stdin);
    // freopen("output.txt","w",stdout);

    int t;
    cin>>t;

    while(t--){

        int n,k;
        cin>>n>>k;
        k--;
        vector<long long>v(n,0);
        for(auto &it:v) cin>>it;

        if(v[0]>v[k] || v[1]>v[k])cout<<0<<'\n';
        else{
            long long ans = 0;
            vector<long long>temp = v;
            // swap(temp[0],temp[k]);
            // ans++;
            int mm = 0;
            for(int i = 0; i<n; i++){
                if(temp[i]>temp[k]){
                    mm = i;
                    break;
                }
                // else ans++;
            }

            if(k<mm){
                swap(temp[0],temp[k]);
                ans++;
                for(int i = 2; i<mm; i++)ans++;
                cout<<ans<<'\n';
            }
            else{
                ans++;
                for(int i = 2; i<mm; i++)ans++;
                long long kk = k,mmm = 0;
                for(int i = mm; i<k; i++)mmm++;
                cout<<max(mmm,ans)<<'\n';
            }

            // swap(v[mm],v[k]);
            // long long mmm = 1;
            // for(int i = mm+1; i<n; i++){
            //     if(v[i]>v[k])break;
            //     else mmm++;
            // }
            // cout<<max(mmm,ans)<<'\n';

        }
    }

    return 0;
}