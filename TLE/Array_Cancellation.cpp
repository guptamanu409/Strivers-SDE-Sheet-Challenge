#include<bits/stdc++.h>
using namespace std;

#define endl '\n'


int main(){

    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin>>t;

    while(t--){

        int n;
        cin>>n;

        vector<long long>arr(n,0);
        // int arr[n] = {0};

        for(auto &it:arr) cin>>it;
        // for(int i = 0; i<n; i++){
        //     cin>>arr[i];
        // }

        // for(int i = 0; i<n; i++) cout<<arr[i]<<" ";
        // cout<<'\n';

        // cout<<endl;
        long long l=0,r=n-1;
        long long ans = 0;

        while(r<n){
            while(l<n){
                // cout<<"l ki value "<<l<<endl;
                if(arr[l]>0){
                    r = l+1;
                    break;
                }
                else l++;
                // cout<<"l ki value "<<l<<endl;
            }
            
            while(r<n){
                // cout<<"r ki value "<<r<<endl;
                if(arr[r]<0) break;
                else r++;
                // cout<<"r ki value "<<r<<endl;
            }
            
            if(l<r && r<n){
                if(arr[l]==abs(arr[r])){
                    arr[l] = 0;
                    arr[r] = 0;
                    continue;
                }
                else if(arr[l]<abs(arr[r])){
                    // long long temp = (arr[r] + arr[l]);
                    arr[r] = (arr[r] + arr[l]);
                    // arr[r] = temp;
                    arr[l] = 0;
                    continue;
                }
                else{
                    // cout<<"yaha aya mein bhosdike chal kyun ni raha"<<endl;
                    // cout<<arr[l]<<" "<<arr[r]<<endl;
                    // int tt = (arr[l]+arr[r]);
                    // cout<<tt<<endl;
                    arr[l] = (arr[l]+arr[r]);
                    // cout<<l<<" "<<r<<endl;
                    // arr[l] = tt;
                    arr[r] = 0;
                    // for(int i = 0; i<n; i++) cout<<arr[i]<<" ";
                    // cout<<'\n';
                    continue;
                }    
            }
            
            
        }

        // for(auto &it:arr) cout<<it<<" ";

        for(auto &it:arr){
            if(it>0) ans+=it;
        }       

        // for(int i = 0; i<n; i++) cout<<arr[i]<<" ";
        // cout<<'\n';

        // cout<<arr[2]<<endl;
        // arr[2] = 88888;
        // cout<<arr[2]<<endl;

        // l = n-1, r = 0;
        // while(l>r && r>=0){
        //     while(l>r){
        //         if(arr[l]>0){
        //             r = l-1;
        //             break;
        //         }
        //         else l--;
        //     }
            
        //     while(l>r && r>=0){
        //         if(arr[r]<0) break;
        //         else r--;
        //     }
            
        //     if(l>r && l>=0 && r>=0){
        //         if(arr[l]==abs(arr[r])){
        //             ans+=arr[l];
        //             arr[l] = 0;
        //             arr[r] = 0;
        //             continue;
        //         }
        //         else if(arr[l]<abs(arr[r])){
        //             arr[r] = arr[r] + arr[l];
        //             ans+=arr[l];
        //             arr[l] = 0;
        //             continue;
        //         }
        //         else{
        //             arr[l] = arr[l] + arr[r];
        //             ans+=abs(arr[r]);
        //             arr[r] = 0;
        //             continue;
        //         }    
        //     }
            
            
        // }

        // for(auto &it:arr) cout<<it<<" ";
        // cout<<'\n';

        cout<<ans<<'\n';

    }

    return 0;
}