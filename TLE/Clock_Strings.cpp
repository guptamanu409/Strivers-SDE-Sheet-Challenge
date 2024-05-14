#include<bits/stdc++.h>
using namespace std;

int main(){

    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin>>t;

    while(t--){

        int a,b,c,d;
        cin>>a>>b>>c>>d;

        if(b<a){
            a = a^b;
            b = b^a;
            a = a^b;

            // cout<<a<<" "<<b<<endl;
        }

        set<int>st;

        for(int i = a+1; i<b; i++) st.insert(i);

        if((st.count(c) && st.count(d)) || ((st.count(c)==0) && (st.count(d)==0))){
            cout<<"NO"<<'\n';
        }
        else cout<<"YES"<<'\n';

        // cout<<st.count(c)<<" "<<st.count(d);
    }


    return 0;
}