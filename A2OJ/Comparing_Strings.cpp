#include<bits/stdc++.h>
using namespace std;

int main(){

    string s,q;

    cin>>s>>q;

    int n = s.size();
    int m = q.size();

    if(n!=m) cout<<"NO";
    //else if(s==q) cout<<"YES";
    else{
        int f = -1;
        int cnt = 0;
        int i = 0;
        for(; i<n; i++){
            if(s[i]!=q[i]){
                ++cnt; 
                if(cnt>2){
                    cout<<"NO";
                    return 0;
                }
                else if(f!=-1){
                    if((s[f]!=q[i]) || (s[i]!=q[f])){
                        cout<<"NO";
                        return 0;
                    }
                }
                else f = i;
            }
        }
        (cnt==2)? cout<<"YES" : cout<<"NO";
    }

    return 0;
}