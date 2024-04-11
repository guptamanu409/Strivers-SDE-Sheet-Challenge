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
        long long n,k;
        cin>>n>>k;

        vector<long long>v(n,0);
        long long sum = 0;
        for(auto &it:v){
            cin>>it;
            sum+=it;
        }
        if(sum<=k)cout<<n<<endl;
        else{
            long long even = k/2;
            long long odd = k - even;

            long long i = 0, j = n-1;
            while(i<n){
                if(v[i]<=odd){
                    odd-=v[i];
                    i++;
                }
                else break;
            }
            while(j>=0){
                if(v[j]<=even){
                    even-=v[j];
                    j--;
                }
                else break;
            }
            cout<<n-(j-i+1)<<endl;
        }
    }

    return 0;
}