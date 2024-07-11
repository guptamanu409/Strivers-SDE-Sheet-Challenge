#include<bits/stdc++.h>
using namespace std;

vector<long long>seive(1e6+1,1);
vector<long long>seiv;
void precompu(){

    seive[0] = 0;
    seive[1] = 0;

    for(int i = 2; i*i<=1e6; i++){
        if(seive[i]){
            // seiv.push_back(i);
            for(int j = i*i; j<=1e6; j+=i){
                seive[j] = 0;
            }
        }
    }

    for(int i = 0; i<1e6; i++){
        if(seive[i]) seiv.push_back(i);
    }
}

int main(){

    ios::sync_with_stdio(false);
    cin.tie(NULL);

    precompu();

    int n,m;
    cin>>n>>m;

    vector<vector<long long>>mat(n,vector<long long>(m,0));

    long long ans = LLONG_MAX;

    for(int i = 0; i<n; i++){
        // long long sum = 0;
        for(int j = 0; j<m; j++){
            cin>>mat[i][j];
            if(seive[mat[i][j]]) mat[i][j] = 0;
            else{
                int pos = lower_bound(seiv.begin(),seiv.end(),mat[i][j]) - seiv.begin();
                // sum+=(seiv[pos]-mat[i][j]);
                mat[i][j] =  (long long)(seiv[pos]-mat[i][j]);
            }
            // sum = (long long)((long long)(sum) + (long long)(mat[i][j]));
            
        }
        // ans = min(ans,sum);
    }
    
    
    for(int i = 0; i<n; i++){
        long long sum = 0;
        for(int j = 0; j<m; j++) sum+=mat[i][j];
        ans = min(ans,sum);
    }
    
    
    for(int i = 0; i<m; i++){
        long long sum = 0;
        for(int j = 0; j<n; j++){
            sum = (long long)((long long)(sum) + (long long)(mat[j][i]));
        }
        ans = min(ans,sum);
    }

    cout<<ans<<'\n';

    // for(auto &r:mat){
    //     for(auto &it:r) cout<<it<<" ";
    //     cout<<'\n';
    // }

    // lower_bound()

    // vector<vector<int>>pm(n,vector<int>(m,0));



    return 0;
}