#include<bits/stdc++.h>
using namespace std;

int main(){

    ios::sync_with_stdio(false);
    cin.tie(NULL);


    int t;
    cin>>t;

    while(t--){

        int n;
        cin>>n;

        string s;
        cin>>s;

        vector<long long>v;

        bool check = true;
        for(auto &it:s){
            if((it>='0') && (it<='9')){
                v.push_back((long long)(it-'0'+'0'));
            }
            else if(it>='a' && it<='z') v.push_back((long long)(it-'a'+'a'));
            else {
                check = false;
                break;
            }
        }
        
        // for(auto&it:v) cout<<it<<" ";

        if(!check) cout<<"NO"<<'\n';
        else{
            (is_sorted(v.begin(),v.end()))? cout<<"YES" : cout<<"NO";
            cout<<'\n';
        }


    }



    return 0;
}