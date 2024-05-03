#include<bits/stdc++.h>
using namespace std;

int main(){

    ios::sync_with_stdio(false);
    cin.tie(NULL);

    // string s = "010";
    // cout<<s.substr(0,1)<<" "<<s.substr(2,1);

    int t;
    cin>>t;

    while(t--){

        int n,k;
        cin>>n>>k;

        set<string>s;

        for(int i = 0; i<n; i++){
            string x;
            cin>>x;
            s.insert(x);
        }

        int cnt = 0;
        for(auto &it:s){
            string x = it;
            size_t pos = x.find('1');
            if(pos==string::npos)continue;
            string l,r;
            l = x.substr(0,pos);
            r = x.substr(pos+1,k-(pos-1));
            cnt+=((l.find('1')==string::npos) && (r.find('1')==string::npos));
            if(cnt>=k)break;
        }

        (cnt>=k)? cout<<"YES" : cout<<"NO";
        cout<<'\n';
    }


    return 0;
}