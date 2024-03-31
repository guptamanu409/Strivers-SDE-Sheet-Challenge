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

        if(k==n){
            for(int i = 0; i<k; i++)cout<<1<<" ";
            cout<<'\n';
        }
        else if(k==1){
            int x = 1e5;
            cout<<x<<" ";
            int i = 1;
            for(; i<n; i++)cout<<i<<" ";
            cout<<'\n';
        }
        else cout<<-1<<'\n';
    }

    return 0;
}