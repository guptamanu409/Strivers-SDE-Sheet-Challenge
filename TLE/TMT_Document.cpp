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

        while(s.size()!=0){
            size_t index = s.find("TMT");
            if(index==string::npos) break;
            else s.erase(index,3);
        }
        (s.size()==0)? cout<<"YES"<<'\n' : cout<<"NO"<<'\n';
    }


    return 0;
}