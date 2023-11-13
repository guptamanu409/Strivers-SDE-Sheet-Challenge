#include<bits/stdc++.h>
using namespace std;

int main(){
    
    int t;
    cin>>t;
    
    while(t--){
        int n,m;
        cin>>n>>m;
        string x,s;
        cin>>x>>s;
        if((x==s) || (find(x.begin(),x.end(),s) != x.end())) cout<<0<<endl;
        else{
            //bool chk = false;
            int cnt = 25-(n*m);
            int ans = 0;
            while(cnt--){
                if((find(x.begin(),x.end(),s) != x.end())){
                    //chk = true;
                    break;
                }
                else{
                    x+=x;
                    ans++;
                }
                
            }
            cout<<ans<<endl;    
        }
        
    }
    
    
    return 0;
}