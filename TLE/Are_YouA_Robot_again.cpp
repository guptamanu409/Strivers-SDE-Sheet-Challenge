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

    // cout<<"print"<<" "<<"safety"<<" "<<"not"<<" "<<"us";
    // cout<<"Print"<<"Safety";
    vector<string>s;

    for(int i = 0; i<4; i++){
        for(int j = 0; j<4; j++){
            string x;
            cin>>x;
            s.push_back(x);
        }
    }

    cout<<"Print"<<"Safety";

    return 0;
}