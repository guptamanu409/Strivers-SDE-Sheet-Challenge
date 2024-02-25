#include<bits/stdc++.h>
using namespace std;

void print(int k, vector<int>&a){
    cout<<"YES"<<'\n';
    for(auto &it:a) cout<<it<<" ";
    while(k--) cout<<1<<" ";
    cout<<'\n';
}

bool helper(int product, int k, vector<int>&a){
    if(k==0 || product==2023){
        if(product==2023){
            
            print(k,a);
            return true;
        }
        else return false;
    }
    bool check = false;
    for(int i = 1; i<=2023; i++){
        if(product*i<=2023){
            a.push_back(i);
            check = helper(product*i,k-1,a);
            if(check) return true;
            a.pop_back();
        }
        else break;
    }
    return false;
}

int main(){

    ios::sync_with_stdio(false);
    cin.tie(NULL);

    // freopen("input.txt","r",stdin);
    // freopen("output.txt","w",stdout);

    int t;
    cin>>t;

    while(t--){
        int n,k;
        cin>>n>>k;

        // vector<int>b;
        int product = 1;
        for(int i = 0; i<n; i++){
            int x;
            cin>>x;
            product*=x;
            // b.push_back(x);
        }

        if(product==2023){
            cout<<"YES"<<'\n';
            while(k--) cout<<1<<" ";
            cout<<'\n';
        }
        else if(product>2023)cout<<"NO"<<'\n';
        else{
            vector<int>ele;
            bool check = helper(product,k,ele);
            if(!check) cout<<"NO"<<'\n';
        }
        
    }

    return 0;
}