#include<bits/stdc++.h>
using namespace std;

int main(){

    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n,a,b,c,d;
    cin>>n>>a>>b>>c>>d;

    bool ans = false;

    if(abs(b-c)<=1){
        if((a!=0) && (d!=0)){
            if(b>0 || c>0) ans = true;
        }
        else ans = true;
    }

    (ans)? cout<<"Yes" : cout<<"No";
    cout<<'\n';

    // int half = n>>1;
    // // if((a<=half) && (b<=half) && (a<=half))

    // // if((b>half) || (c>half))cout<<"No"<<endl;
    // // else if((a>half) && ())

    // vector<int>v(4,0);
    // v[0] = a;
    // v[1] = b;
    // v[2] = c;
    // v[3] = d;

    // vector<string>s;
    // s.push_back("XX");
    // s.push_back("XY");
    // s.push_back("YX");
    // s.push_back("YY");
    
    // int cnt = 0;
    // char last;
    // if(v[0]!=0){
    //     cnt = v[0];
    //     v[0] = 0;
    //     last = s[0][1];
    // }

    // else{
    //     for(int i = 0; i<4; i++){
    //         if(v[i]!=0){
    //             cnt = 2;
    //             v[i]--;
    //             last = s[i][1];
    //             break;
    //         }
    //     }
    // }
    
    // bool check = true;
    // while(check){
    //     // bool 
    //     check = false;
    //     for(int i = 0; i<4; i++){
    //         if(v[i]!=0){
    //             cout<<last<<" "<<s[i][0]<<endl;
    //             if(last!=s[i][0]) cnt+=2;
    //             else cnt++;
    //             v[i]--;
    //             check = true;
    //             last = s[i][1];
    //             if(cnt>=n)break;
    //         }
    //     }
    // }

    // (cnt<n)? cout<<"Yes" : cout<<"No";
    // cout<<'\n';

    return 0;
}