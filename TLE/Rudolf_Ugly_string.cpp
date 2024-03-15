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

        int n;
        cin>>n;

        string s;
        cin>>s;

        long long m = 0, p = 0;

        size_t tt = 0;
        while(true){
            tt = s.find("map",tt);
            if(tt!=string::npos){
                m++;
                tt++;
            }
            else break;
        }
        tt = 0;
        while(true){
            tt = s.find("pie",tt);
            if(tt!=string::npos){
                p++;
                tt++;
            }
            else break;
        }
        // cout<<m+p<<endl;

        reverse(s.begin(),s.end());

        long long mm = 0, pp = 0;
        tt = 0;
        while(true){
            tt = s.find("map",tt);
            if(tt!=string::npos){
                mm++;
                tt++;
            }
            else break;
        }
        tt = 0;
        while(true){
            tt = s.find("pie",tt);
            if(tt!=string::npos){
                pp++;
                tt++;
            }
            else break;
        }

        long long le = m + p;
        long long ri = mm + pp;
        if(ri!=0 && le!=0) cout<<min(le,ri)<<endl;
        else if(le!=0) cout<<le<<endl;
        else cout<<ri<<endl;
    }

    return 0;
}