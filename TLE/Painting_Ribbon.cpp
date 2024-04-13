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

        int n,m,k;
        cin>>n>>m>>k;

        // (k>=m)? cout<<"NO"<<endl : cout<<"YES"<<endl;
        if(m==1)cout<<"NO"<<endl;
        else{
            vector<int>v(51,0);
            int cnt = 0;
            int maxi = INT_MIN;
            for(int i = 1; i<=n; i++){
                // cnt+= (((i%m)+1)!=1);
                v[((i%m)+1)]++;
                maxi = max(maxi,v[((i%m)+1)]);
            }
            ((n-maxi)<=k)? cout<<"NO"<<endl : cout<<"YES"<<endl;
        }
        
    }

    return 0;
}