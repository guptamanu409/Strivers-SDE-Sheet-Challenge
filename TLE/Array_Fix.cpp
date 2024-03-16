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
        vector<int>v;
        for(int i = 0; i<n; i++){
            int x;
            cin>>x;
            v.push_back(x);
            // if(x<10)v.push_back(x);
            // else{
            //     v.push_back(x/10);
            //     v.push_back(x%10);
            // }
        }
        bool check = true;
        // for(auto &it:v) cout<<it<<" ";
        n = v.size();
        vector<int>temp;
        for(int i = 0; i<n-1; i++){
            // if(v[i]>v[i+1]){
            //     check = false;
            //     break;
            // }
            if(v[i]<=v[i+1]){
                temp.push_back(v[i]);
                continue;
            }
            else{
                int ele = v[i];
                int fir = ele/10;
                int seco = ele%10;
                if((fir<=seco) && (seco<=v[i+1])){
                    temp.push_back(fir);
                    temp.push_back(seco);
                    // temp.push_back(fir);
                }
                else{
                    check = false;
                    break;
                }
            }
        }
        if(!check)cout<<"NO"<<'\n';
        else{
            n = temp.size();
            for(int i = 0; i<n-1; i++){
                if(temp[i]<=temp[i+1]){
                    // temp.push_back(v[i]);
                    continue;
                }
                else{
                    int ele = temp[i];
                    int fir = ele/10;
                    int seco = ele%10;
                    if((fir<=seco) && (seco<=temp[i+1])){
                        // temp.push_back(fir);
                        // temp.push_back(seco);
                        // temp.push_back(fir);
                        continue;
                    }
                    else{
                        check = false;
                        break;
                    }
                }
            }
            (check)? cout<<"YES"<<'\n' : cout<<"NO"<<'\n';
        }
        
    }

    return 0;
}