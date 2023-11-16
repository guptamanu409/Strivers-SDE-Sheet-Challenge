#include<bits/stdc++.h>
using namespace std;

int main(){

    int n;
    cin>>n;

    vector<int>v;
    int mini = INT_MAX, mi = 0, maxi = INT_MIN, mai = 0;
    for(int i = 0; i<n; i++){
        int x;
        cin>>x;
        if(x>maxi){
            maxi = x;
            mai = i;
        }

        if(x<mini || x==mini){
            mini = x;
            mi = i;
        }
        v.push_back(x);
    }

    if(mai==0 && mi == n-1) cout<<0<<endl;

    else if(mai==0 && mi!=n-1) cout<<n-1-mi;

    else if(mi==n-1 && mai!=0) cout<<mai-0;

    else if(mai<mi) cout<<(mai-0) + (n-1-mi);

    else cout<<n-1-mi + (mai-0-1);



    return 0;
}