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

        int k,q;
        cin>>k>>q;

        vector<int>r(k,0);
        for(auto &it:r)cin>>it;

        vector<int>p(q,0);
        for(auto &it:p)cin>>it;

        for(int i = 0; i<q; i++){
            int val = p[i];
            int j = 0;
            while(r[j]<=val && j<k){
                val = val - ((val-r[j])+1);
                j++;
            }
            cout<<val<<" ";
        }
        cout<<endl;

    }

    return 0;
}