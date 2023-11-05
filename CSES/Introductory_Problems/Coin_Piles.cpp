#include<bits/stdc++.h>
using namespace std;

int main(){

    int t;
    cin>>t;

    while(t--){
        long long a,b;
        cin>>a>>b;

        // if(b<a && (long long)(b*2)==a) cout<<"YES"<<endl;
        // else if(b>a && (long long)(a*2)==b) cout<<"YES"<<endl;
        // else if((long long)((a+b)%3)==0) cout<<"YES"<<endl;
        // else cout<<"NO"<<endl;

        if((long long)((a+b)%3)==0 && (long long)(2*a)>=b && (long long)(2*b)>=a) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }


    return 0;
}