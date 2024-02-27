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
        vector<long long>arr;
        long long ans = 0;
        bool check = false;
        long long cur = 0,index = 0;
        for(long long i = 0; i<n; i++){
            long long x;
            cin>>x;
            if(!check && x==0) arr.push_back(0);
            else{
                check = true;
                if(cur!=0 && x==0){
                    arr[index]--;
                    ans++;
                    cur--;
                    if(cur==0){
                        cur = 1;
                        index = i;
                    }
                    arr.push_back(1);
                }
                else if(cur==0 && x!=0 || (x>cur)){
                    cur = x;
                    index = i;
                    arr.push_back(cur);
                }
                else arr.push_back(x);
                
            }
        }
        // for(auto it:arr) cout<<it<<" ";
        // cout<<endl;
        // cout<<(long long)((long long)accumulate(arr.begin(),arr.end()-1,0)+(long long)ans)<<'\n';
        long long sum = 0;
        for(long long i = 0; i<n-1; i++){
            sum+=arr[i];
        }
        cout<<(long long)(sum+ans)<<endl;
    }

    return 0;
}