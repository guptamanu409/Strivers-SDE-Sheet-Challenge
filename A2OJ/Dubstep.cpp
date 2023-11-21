#include<bits/stdc++.h>
using namespace std;


int main(){

    string s;
    cin>>s;
    int cnt = 0;
    bool check = true;
    while(check && cnt<s.size()){
        auto val = s.find("WUB",cnt);
        if(val==string::npos){
            for(int i = cnt; i<s.size(); i++) cout<<s[i];
            check = false;
            continue;
        }
        if(val==cnt){
            cnt+=3;
            //s.erase(val,3);
        }
        else{
            for(int i = cnt; i<val; i++) cout<<s[i];
            cout<<" ";
            cnt = val+3;
            //s.erase(val,3);
        }
        
    }
    //cout<<s.size()<<endl;

    return 0;
}