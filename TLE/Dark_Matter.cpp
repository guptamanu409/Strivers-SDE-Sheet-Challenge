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

    // long long a,b;
    // char ch;
    // cin>>a>>ch>>b;
    // cout<<a+b+1<<'\n';

    string s;
    // cin>>s;
    // cout<<s.size();
    getline(cin,s);
    // cout<<s.size();
    long long val = 0;
    for(auto &it:s){
        if(it!=' ' && it!='+')val+=(it-'0');
    }
    val = ceil(val + 0.27 - 0.02 + 0.03);
    cout<<val;

    return 0;
}