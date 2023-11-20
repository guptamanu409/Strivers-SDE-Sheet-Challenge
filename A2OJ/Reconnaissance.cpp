#include<bits/stdc++.h>
using namespace std;

int main(){

    int n;
    cin>>n;

    vector<int>v;

    for(int i = 0; i<n; i++){

        int x;
        cin>>x;
        v.push_back(x);
    }

    int mini = abs(v[0]-v[n-1]);
    int i1 = n, i2 = 1;

    for(int i = 0; i<n-1; i++){
        if(abs(v[i]-v[i+1])<mini){
            mini = abs(v[i]-v[i+1]);
            i1 = i+1;
            i2 = i+2;
        }
    }

    cout<<i1<<" "<<i2<<endl;

    return 0;
}