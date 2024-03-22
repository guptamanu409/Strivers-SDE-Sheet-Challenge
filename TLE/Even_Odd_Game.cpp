#include<bits/stdc++.h>
using namespace std;

bool compo(const long long &a, const long long &b){
    return a>b;
}

int main(){

    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin>>t;

    while(t--){

        int n;
        cin>>n;

        vector<long long>v(n,0);

        for(auto &it:v) cin>>it;

        sort(v.begin(),v.end(),compo);

        bool check = true;
        long long ali = 0, bob = 0;

        for(auto &it:v){

            if(check){
                ali+= ((it&1)==0)? it : 0;
                // check = false;
            }
            else bob+= (it&1)? it : 0;
            check = !check;
        }

        (ali==bob)? cout<<"Tie"<<'\n' : (ali>bob)? cout<<"Alice"<<'\n' : cout<<"Bob"<<'\n';
    }

    return 0;
}