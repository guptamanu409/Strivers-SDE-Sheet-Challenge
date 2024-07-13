#include<bits/stdc++.h>
using namespace std;

int main(){

    ios::sync_with_stdio(false);
    cin.tie(NULL);


    long long x;
    cin>>x;

    if(x==1)cout<<1<<" "<<1<<'\n';
    else{
        // vector<long long>divi;
        long long mini = LLONG_MAX;
        vector<long long>ans(2);

        for(long long i = 1; (long long)(i*i)<=x; i++){
            if(x%i==0){
                // divi.push_back(i);
                if(i!=(x/i)){
                    if((__gcd(i,(x/i))==1) && (max(i,(x/i))<mini)){
                        ans[0] = i;
                        ans[1] = (x/i);
                        mini = max(i,(x/i));
                    }
                } 
            }
        }

        cout<<ans[0]<<" "<<ans[1]<<'\n';

        // sort(divi.begin(),divi.end());
        

        // for(int )


        /*
        for(int i = 0; i<divi.size(); i++){
            for(int j = i+1; j<divi.size(); j++){
                long long tt = (long long)(divi[i]*divi[j])/__gcd(divi[i],divi[j]);
                if(tt==x && (max(divi[i],divi[j])<mini)){
                    mini = max(divi[i],divi[j]);
                    ans[0] = divi[i];
                    ans[1] = divi[j];
                    // cout<<divi[i]<<" "<<divi[i+1]<<'\n';
                    // break;
                }
            }
            
        }
        cout<<ans[0]<<" "<<ans[1]<<'\n';
        */
    }

    


    return 0;
}