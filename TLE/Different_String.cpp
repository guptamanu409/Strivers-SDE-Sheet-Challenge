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

        // int x,y;
        // cin>>x>>y;

        // cout<<min(x,y)<<" "<<max(x,y)<<'\n';

        string s;
        cin>>s;

        bool check = false;
        int pos = 0;
        int n = s.size();
        if(n==1) cout<<"NO"<<'\n';
        else{
            string temp = s;
            for(int i = 0; i<n; i++){
                for(int j = i+1; j<n; j++){
                    swap(temp[i],temp[j]);
                    if(temp!=s){
                        check = true;
                        break;
                    }
                    swap(temp[i],temp[j]);
                }
            }


            // sort(s.begin(),s.end());
            // for(int i = 0; i<n-1; i++){
            //     if(s[i]!=s[i+1]){
            //         check = true;
            //         pos = i+1;
            //         break;
            //     }
            // }
            if(check){
                cout<<"YES"<<'\n';
                // swap(s[0],s[pos]);
                cout<<temp<<'\n';
            }
            else cout<<"NO"<<'\n';
        }

    }

    return 0;
}