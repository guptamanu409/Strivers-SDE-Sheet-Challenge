#include<bits/stdc++.h>
using namespace std;

#define endl '\n'

int main(){

    ios::sync_with_stdio(false);
    cin.tie(NULL);

    // freopen("input.txt","r",stdin);
    // freopen("output.txt","w",stdout);

    int t;
    cin>>t;

    while(t--){
        long long n;
        cin>>n;

        string s;
        cin>>s;

        long long ss = s.size();

        string tt;
        tt = s;
        reverse(s.begin(),s.end());
        s+=tt;

        (tt<=s)? cout<<tt<<endl : cout<<s<<endl;

        // if(ss==1) cout<<s<<endl;
        // else{
        //     long long temp = 0;
        //     for(int i = 0; i<(ss/2); i++){
        //         if(s[i]<s[ss-1-i])temp++;
        //         else if(s[i]>s[ss-1-i])temp--;
        //         else continue;
        //     }
        //     if(temp>0)cout<<s<<endl;
        //     else if(temp==0){
        //         string tt = s;
        //         reverse(s.begin(),s.end());
        //         s+=tt;
        //         (tt<s)? cout<<tt<<endl : cout<<s<<endl;
        //     }
        //     else{
        //         string tt = s;
        //         reverse(s.begin(),s.end());
        //         cout<<s<<tt<<endl;
        //     }
        // }

        // if(s[0]<=s[ss-1]) cout<<s<<'\n';
        // else{
        //     string temp = s;
        //     reverse(s.begin(),s.end());
        //     cout<<s<<temp<<endl;
        // }
    }

    return 0;
}