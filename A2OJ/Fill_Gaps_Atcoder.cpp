#include<bits/stdc++.h>
using namespace std;

int main(){

    int n;
    cin>>n;

    vector<int>a;
    int x,y;
    cin>>x>>y;

    bool check = (abs(x-y)==1)? true : false;
    a.push_back(x);
    a.push_back(y);
    for(int i = 2; i<n; i++){
        int z;
        cin>>z;
        a.push_back(z);
        if(!check) continue;
        else{
            check = (abs(y-z)==1)? true : false;
            y = z;
        }
    }

    if(check) {
        for(auto &it:a) cout<<it<<" ";
        cout<<'\n';
    }
    else{
        int i = 0;
        while(i<n-1){
            if(abs(a[i]-a[i+1])==1) cout<<a[i++]<<" ";
            else{
                if(a[i]>a[i+1]){
                    cout<<a[i]<<" ";
                    for(int j = a[i]-1; j>a[i+1]; j--) cout<<j<<" ";
                    i++;

                }
                else{
                    cout<<a[i]<<" ";
                    for(int j = a[i]+1; j<a[i+1]; j++) cout<<j<<" ";
                    i++;
                }
            }
        }
        cout<<a[i]<<'\n';
    }

    return 0;
}