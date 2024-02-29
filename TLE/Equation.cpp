#include<bits/stdc++.h>
using namespace std;

// vector<long long>a;
// vector<bool>a(1e9+1,1);
// unordered_map<long long,int>a;

// void compute(){
//     cout<<"Yaha tak aa gaya mein2";
//     a[2]=0;
    // for(long long i = 0; i<(1e9+1); i++) a.emplace_back(1);
    // for(long long i = 0; i<(1e9+1); i++) a[i]=1;
    // cout<<"Yaha tak aa gaya mein3";
    // for(long long i = 2; i*i<=1e9; i++){
    //     if(a[i]==1){
    //         long long temp = i*i;
    //         for(; temp<=1e9; temp+=i){
    //             a[temp]++;
    //             // a[temp]=0;
    //         }
    //     }
    // }

//     for(long long i = 2; i*i<=1e9; i++){
//         if(a[i]==0){
//             long long temp = i*i;
//             for(; temp<=1e9; temp+=i){
//                 a[temp]=2;
//                 // a[temp]=0;
//             }
//         }
//     }
//     cout<<"Yaha tak aa gaya mein4";
// }


int main(){

    ios::sync_with_stdio(false);
    cin.tie(NULL);
    // cout<<"Yaha tak aa gaya mein1";
    // compute();
    // cout<<"Yaha tak aa gaya mein5";
    int n;
    cin>>n;

    cout<<9*n<<" "<<8*n<<'\n';

    // long long ans = 0;

    // for(long long i = 4; i<=1e9; i++){
    //     // if(a[i]==0)
    //     if(a[i]>1){
    //         ans = i+n;
    //         // if(a[ans]==0)
    //         if(a[ans]>1){
    //             cout<<ans<<" "<<i<<'\n';
    //             break;
    //         }
    //     }
    // }

    return 0;
}