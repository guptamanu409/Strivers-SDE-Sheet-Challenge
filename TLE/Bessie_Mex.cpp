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
        for(auto &it:a) cin>>it;
        map<int,int>mp;
        int mini;
        if(a[0]<0){
            cout<<abs(a[0])<<" ";
            mp[abs(a[0])]++;
            mini = 0;
        }
        else{
            cout<<0<<" ";
            mp[0]++;
            mini = 1;
        }
        int i = 1;

        for(; i<n; i++){
            if(mini<=a[i]){
                if(mp[mini]==0){
                    cout<<mini<<" ";
                    // mini++;
                    mp[mini]++;
                    mini++;
                }
                else{
                    int temp = mini;
                    temp++;
                    while(mp[temp]==1)temp++;
                    cout<<temp<<" ";
                    mp[temp]++;
                    // mini++;
                    mini = temp+1;
                }
            }
            else{
                int temp = mini - a[i];
                if(mp[temp]==0){
                    cout<<temp<<" ";
                    // mini++;
                    mp[temp]++;

                }
                else{
                    // int temp = mini;
                    temp++;
                    while(mp[temp]==1)temp++;
                    cout<<temp<<" ";
                    mp[temp]++;
                    // mini++;
                }
                mini+= (temp==mini);
            }
            while(mp[mini]==1)mini++;
        }
        cout<<'\n';
    }

    return 0;
}