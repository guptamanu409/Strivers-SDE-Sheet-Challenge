#include<bits/stdc++.h>
using namespace std;

int main(){

    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin>>t;

    while(t--){

        int n;
        cin>>n;

        vector<int>v(n,0);

        for(auto &it:v) cin>>it;

        if(n==1) cout<<v[0]<<'\n';
        else{

            sort(v.begin(),v.end());

            long long ele = v[n-1];
            long long tt = ele;

            int maxi = 0, pos = 0;

            while(tt){
                maxi = (tt&1)? pos : maxi;
                pos++;
                tt = tt>>1;
            }

            cout<<v[n-1]<<" ";
            v[n-1] = -1;

            tt = ele;

            while(maxi>0){
                if((tt&(1<<maxi))==0) break;
                maxi--;
            }

            if(maxi<0){
                for(int i = n-2; i>=0; i--) cout<<v[i]<<" ";
                cout<<'\n';
            }
            else{
                long long max_ele = ele;
                int ind = 0;
                while(maxi>=0){
                    bool check = false;
                    for(int i = n-2; i>=0; i--){
                        if((v[i]!=-1) && ((ele|v[i])>max_ele)){
                            check = true;
                            ind = i;
                            max_ele = ele|v[i];
                            
                            // cout<<v[i]<<" ";
                            
                            // ele = (long long)((ele|v[i]));
                            // if((ele|v[i])>max_ele){
                            //     check = true;
                            //     ind = i;
                            //     max_ele = ele|v[i];
                            // }
                            // v[i] = -1;
                            // maxi--;
                            // while(maxi>0){
                            //     if((ele&(1<<maxi))==0) break;
                            //     maxi--;
                            // }
                        }
                        // if(maxi<0) break;
                    }
                    if(check){
                        cout<<v[ind]<<" ";
                        ele = ele|v[ind];
                        v[ind] = -1;
                        
                    }
                    maxi--;
                    // while(maxi>0){
                    //     if((ele&(1<<maxi))==0) break;
                    //     maxi--;
                    // }
                }
                
                for(int i = n-1; i>=0; i--){
                    if(v[i]>=0)cout<<v[i]<<" ";
                }
                cout<<'\n';
            }
        }
    }


    return 0;
}