#include<bits/stdc++.h>
using namespace std;

int main(){

    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n,k;
    cin>>n>>k;

    if(k==1) cout<<n<<'\n';
    else{
        int cnt = 1;

        vector<int>ans;
        bool check = false;
        for(int i = 2; i*i<=n; i++){
            if(n%i==0){
                while(n%i==0){
                    n = n/i;
                    ans.push_back(i);
                    if(n>1){
                        ++cnt;
                        if(cnt==k){
                            check = true;
                            break;
                        }
                    }
                    else break;
                }
                
            }
            if(check) break;
        }

        if(check){
            for(auto &it:ans) cout<<it<<" ";
            cout<<n<<'\n';
        }
        else cout<<-1<<'\n';
    }




    return 0;
}