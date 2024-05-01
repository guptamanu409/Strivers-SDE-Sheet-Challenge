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

        int n;
        cin>>n;

        vector<int>a(n,0);
        vector<int>b(n,0);

        for(auto &it:a) cin>>it;
        for(auto &it:b) cin>>it;

        int i = 0, j= 0;
        int cnt = 0;
        while(i<n && j<n){
            if(a[i]<=b[j]){
                i++;
                j++;
            }
            else{
                cnt++;
                j++;
            }
        }
        cout<<cnt<<'\n';
    }

    return 0;
}