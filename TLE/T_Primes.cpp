#include<bits/stdc++.h>
using namespace std;

vector<long long>seive(1e6+1,1);
void precompu(){

    seive[0] = 0;
    seive[1] = 0;

    for(int i = 2; i*i<=1e6; i++){
        if(seive[i]){

            for(int j = i*i; j<=1e6; j+=i){
                seive[j] = 0;
            }
        }
    }
}

int main(){

    ios::sync_with_stdio(false);
    cin.tie(NULL);

    precompu();

    int n;
    cin>>n;

    vector<long long>v(n,0);
    unordered_map<long long,string>umm;
    for(auto &it:v) cin>>it;
    
    for(int i = 0; i<n; i++){
        long long srt = sqrt(v[i]);
        if(((long long)(srt*srt)==v[i]) && seive[srt]) cout<<"YES"<<'\n';
        else cout<<"NO"<<'\n';
    }
    
    /*
    for(int i = 0; i<n; i++){
        cin>>v[i];
        if(umm[v[i]].size()>=2) cout<<umm[v[i]]<<'\n';
        else{
            int cnt = 2;
            for(long long j = 2; (long long)(j*j)<=v[i]; j++){
                if((v[i]%j)==0){
                    ++cnt;
                    if(j!=(v[i]/j)) ++cnt;
                    if(cnt>3) break;
                }

            }
            (cnt==3)? cout<<"YES"<<'\n' : cout<<"NO"<<'\n';
            umm[v[i]] = (cnt==3)? "YES" : "NO";
        }
        
    }
    */



    return 0;
}