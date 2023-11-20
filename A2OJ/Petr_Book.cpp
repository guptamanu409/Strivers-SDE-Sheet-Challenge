#include<bits/stdc++.h>
using namespace std;

int main(){

    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin>>n;

    vector<int>v;
    for(int i = 0; i<7; i++){
        int x;
        cin>>x;
        v.push_back(x);
    }

    
    while(true){
        bool check = false;
        for(int i = 0; i<7; i++){
            if(v[i]>=n){
                cout<<i+1<<endl;
                check = true;
                break;
            }
            n-=v[i];
        }
        if(check) break;
    }

    return 0;
}