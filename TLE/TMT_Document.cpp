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


        if(s[0]=='M' || s[n-1]=='M') cout<<"NO"<<'\n';
        else{
            vector<int>t,m;
            for(int i = 0; i<n; i++){
                if(s[i]=='M') m.push_back(i);
                else t.push_back(i);
            }

            if((n/3 != m.size()) || (m.size()*2!=t.size())){
                cout<<"NO"<<'\n';
            }
            else{
                bool check = true;
                for(int i = 0; i<m.size(); i++){
                    if(!(t[i]<m[i] && m[i]<t[i+m.size()])){
                        cout<<"NO"<<'\n';
                        check = false;
                        break;
                    }
                }
                if(check) cout<<"YES"<<'\n';
            }
        }

        // Wrong Approach hai iske nich

        // while(s.size()!=0){
        //     size_t index = s.find("TMT");
        //     if(index==string::npos) break;
        //     else s.erase(index,3);
        // }
        // (s.size()==0)? cout<<"YES"<<'\n' : cout<<"NO"<<'\n';
    }


    return 0;
}