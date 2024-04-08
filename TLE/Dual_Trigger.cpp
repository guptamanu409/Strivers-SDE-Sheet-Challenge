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

        string s;
        cin>>s;
        // vector<int>v;
        int cnt = 0;
        for(int i = 0; i<n; i++){
            if(s[i]=='1'){
                cnt++;
                // v.push_back(i);
            }
        }
        if(cnt&1)cout<<"NO"<<'\n';
        else{
            if(cnt==2 && s.find("11")!=string::npos)cout<<"NO"<<'\n';
            else cout<<"YES"<<'\n';
        }
    }

    return 0;
}