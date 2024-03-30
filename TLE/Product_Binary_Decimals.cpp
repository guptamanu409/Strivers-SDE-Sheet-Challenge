#include<bits/stdc++.h>
using namespace std;

bool helper(int n){
    while(n){
        int rem = n%10;
        if(rem!=1 && rem!=0) return false;
        n = n/10;
    }
    return true;
}

vector<int>bd;
void bi_deci(){
    for(int i = 1; i<=1e5; i++){
        if(helper(i))bd.push_back(i);
    }
}

vector<int>ans(1e5+1,0);

void compute(){
    ans[1] = 1;
    for(int i = 1; i<=1e5; i++){
        if(ans[i]){
            for(int j = 0; j<bd.size(); j++){
                int ele = i*bd[j];
                if(ele>1e5)break;
                else ans[ele] = 1;
            }
        }
    }
}

int main(){

    ios::sync_with_stdio(false);
    cin.tie(NULL);

    bi_deci();
    // for(auto &it:bd) cout<<it<<" ";

    // cout<<bd.size();
    compute();
    int t;
    cin>>t;

    while(t--){

        int n;
        cin>>n;

        (ans[n])? cout<<"YES"<<'\n' : cout<<"NO"<<'\n';
    }


    return 0;
}