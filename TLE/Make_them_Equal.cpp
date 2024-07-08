#include<bits/stdc++.h>
using namespace std;

int main(){

    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin>>t;

    while(t--){

        unsigned int a,b,c;
        cin>>a>>b>>c;

        for(int i = 0; i<=30; i++){

            int cnt = 0;
            if(a&(1<<i)) cnt++;
            if(b&(1<<i)) cnt++;
            if(c&(1<<i)) cnt++;

            if((cnt%3==0) || ((a==b) && (b==c))) break;
            else{
                if(cnt==1){
                    if(a&(1<<i)) a+=(1<<i);
                    if(b&(1<<i)) b+=(1<<i);
                    if(c&(1<<i)) c+=(1<<i);
                }
                else{
                    if((a&(1<<i))==0) a+=(1<<i);
                    if((b&(1<<i))==0) b+=(1<<i);
                    if((c&(1<<i))==0) c+=(1<<i);
                }
            }
        }

        if((a==b) && (b==c)) cout<<"YES"<<'\n';
        else cout<<"NO"<<'\n';
    }


    return 0;
}