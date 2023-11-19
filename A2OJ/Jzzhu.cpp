#include<bits/stdc++.h>
using namespace std;

int main(){


    int n,m;
    cin>>n>>m;

    int maxi = INT_MIN, index = 0;
    //vector<int>v;
    for(int i = 0; i<n; i++){
        int x;
        cin>>x;
        int val = (x+m-1)/m;
        if(val>=maxi){
            maxi = val;
            index = i;
        }
        //v.push_back(x);
    }

    cout<<index+1<<endl;

    // if(n==1) cout<<1<<endl;

    // else if(maxi<=m) cout<<n<<endl;

    // else{
    //     bool check = false;
    //     maxi = INT_MIN;
    //     for(int i = 0; i<n; i++){
    //         if(v[i]>m){
    //             int diff = v[i]-m;
    //             if(diff>m)
    //         }
    //     }
    // }



    return 0;
}