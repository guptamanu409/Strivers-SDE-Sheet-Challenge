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

        long long n,c,d;
        cin>>n>>c>>d;

        map<long long, long long>mp;
        long long mini = INT_MAX;

        for(long long i = 0; i<(n*n); i++){
            long long x;
            cin>>x;
            mini = min(x,mini);
            mp[x]++;
        }

        vector<vector<long long>>v(n,vector<long long>(n,0));

        //1st row
        v[0][0] = mini;
        bool check = true;
        for(long long i = 1; i<n; i++){
            v[i][0] = (long long)(v[i-1][0]+c);
            if(mp[v[i][0]]==0){
                check = false;
                break;
            }
            else mp[v[i][0]]--;
        }
        if(!check)cout<<"NO"<<endl;
        else{
            for(long long i = 1; i<n; i++){
                v[0][i] = (long long)(v[0][i-1]+d);
                if(mp[v[0][i]]==0){
                    check = false;
                    break;
                }
                else mp[v[0][i]]--;
                for(int j = 1; j<n; j++){
                    v[j][i] = (long long)(v[j-1][i]+c);
                    if(mp[v[j][i]]==0){
                        check = false;
                        break;
                    }
                    else mp[v[j][i]]--;
                }
            }
            (check)? cout<<"YES"<<endl : cout<<"NO"<<endl;
        }

    }

    return 0;
}