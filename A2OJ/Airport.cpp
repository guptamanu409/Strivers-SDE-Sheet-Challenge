#include<bits/stdc++.h>
using namespace std;

int main(){

    int n,m;
    cin>>n>>m;

    vector<long long>v(m,0);
    for(auto &it:v) cin>>it;

    sort(v.begin(),v.end());

    long long mini = 0, maxi = 0;

    vector<long long>t = v;
    // for(auto it:t) cout<<it<<" ";
    // cout<<endl;
    //minimum
    int x = n;
    while(x){

        for(int i = 0; i<m; i++){
            if(x>=t[i]){
                if(x>t[i]){
                    long long sum = t[i];
                    x-=t[i];
                    t[i] = 0;
                    sum= (long long)(sum*(sum+1)/2);
                    mini+=sum;
                }
                else{
                    long long sum = t[i];
                    x-=t[i];
                    t[i] = 0;
                    sum=(long long)(sum*(sum+1)/2);
                    mini+=sum;
                    break;
                }
            }
            else{
                while(x--){
                    mini+=t[i];
                    t[i]--;
                    if(x==0)break;
                }
                break;
            }
        }
    }

    //maximum
    while(n){

        for(int i = m-1; i>=0; i--){
            if(v[i]==0) continue;
            maxi+=v[i];
            n--;
            if(n==0) break;
            v[i]--;
        }
    }

    cout<<maxi<<" "<<mini<<endl;

    return 0;
}