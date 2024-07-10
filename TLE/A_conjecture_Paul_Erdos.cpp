#include<bits/stdc++.h>
using namespace std;

vector<int>seive(1e7,1);
// unordered_map<int,int>umm;

void precompu(){

    seive[0] = 0;
    seive[1] = 0;
    for(long long i = 2; (long long)(i*i)<1e7; i++){
        if(seive[i]){

            for(int j = i*i; j<1e7; j+=i){
                seive[j] = 0;
            }
        }
    }

    // for(int i = 1; i<1e2; i++){
    //     umm[(i*i*i*i)] = i;
    // }
}

/*
long long b_e(long long a, long long b){
    long long answ = 1;
    while(b){
        if(b&1){
            answ = answ*a;
        }
        b = b>>1;
        a = a*a;
    }

    return answ;
}
*/

int main(){

    ios::sync_with_stdio(false);
    cin.tie(NULL);

    precompu();

    vector<int>ans(1e7,0);
    vector<int>ans2(1e7,0);
    ans[0] = 0;
    ans[1] = 0;
    ans[2] = 1;
    
    
    /*
    int cnt = 1;
    for(int i = 3; i<1e7; i++){
        if(seive[i]){
            for(long long j = 1; (long long)(j*j)<=i; j++){
                long long ff = (long long)(j*j);
                // if(ff>i) break;
                long long rem = (long long)(i - ff);
                // rem = (long long)b_e(rem,4);
                // rem = (long long)(rem*rem*rem*rem);

                // if(rem>=i) continue;
                // else{
                //     if((long long)(ff+rem)==i){
                //         // cnt++;
                //         ans[ff+rem] = cnt;
                //         break;
                //     }
                // }

                if(umm[rem]!=0) cnt++;
                else continue;
            }
        }
        ans[i] = cnt;
    }
    */
    
    // map<int,pair<int,int>>mp;
    
    for(int i = 1; i<=1e4; i++){
        long long ff = i*i;
        if(ff>=1e7) break;
        for(int j = 1; j<=1e2; j++){
            
            long long ss = (j*j*j*j);
            if((ss>=1e7) || ((ff+ss)>=1e7)) break;
            if(seive[ff+ss]){
                ans[ff+ss] = 1;
                // mp[ff+ss]={ff,ss};
                // if(ans[ff+ss]==0) cout<<ff<<" "<<ss<<" "<<i<<" "<<j<<" "<<ff+ss<<'\n';
            }


        }
    }

    for(int i = 1; i<1e7; i++){
        ans[i] = ans[i] + ans[i-1];
    }
    /*
    cnt = 0;
    for(int i = 0; i<1e7; i++){
        if(ans2[i] && (ans[i]==0)){
            // cout<<i<<'\n';
            // cout<<mp[i].first<<" "<<mp[i].second<<'\n';
            ++cnt;
            // if(cnt) break;
        }
    }

    cout<<cnt<<'\n';
    */
    int t;
    cin>>t;

    while(t--){

        int n;
        cin>>n;

        if(n<=1) cout<<0<<'\n';
        else if(n==2) cout<<1<<'\n';
        else{
            cout<<ans[n]<<'\n';
            /*
            int ans = 1;

            for(int i = 3; i<=n; i++){
                if(seive[i]){
                    bool check = false;
                    for(int j = 1; j*j<=i; j++){
                        
                        long long tt = i-(j*j);
                        tt = b_e(tt,4);
                        if(((j*j)+tt)==i){
                            ans++;
                            check = true;
                            break;
                        }
                        
                        // if(((j*j)+1)==i){
                        //     ans++;
                        //     break;
                        // }
                        // bool check = false;
                        // long long v = j*j;
                        // for(int k = 1; k*k*k*k<=i; k++){
                        //     long long tt = (v)+(k*k*k*k);
                        //     if(tt==i){
                        //         check = true;
                        //         ans++;
                        //         break;
                        //     }
                        //     else if(tt>i) break;

                        // }
                        // if(check)break;
                    }
                    if(!check){
                        for(int j = 1; (((j*j)*j)*j)<=i; j++){
                            long long vv = (((j*j)*j)*j);
                            long long tt = i-vv;
                            tt = b_e(tt,2);
                            if((vv+tt)==i){
                                ans++;
                                // check = true;
                                break;
                            }
                        }
                    }
                }
            }

            cout<<ans<<'\n';
            */
        }
    }



    return 0;
}