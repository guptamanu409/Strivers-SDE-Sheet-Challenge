#include<bits/stdc++.h>
using namespace std;

long long gcd(long long a, long long b){
    if(b==0)return a;
    return gcd(b,a%b);
}

long long helper(long long a, long long b, long long c){
    long long prev = (long long)((a-1)/c);
    long long tot = (long long)((b)/c);
    return (long long)(tot-prev);
}

int main(){


    long long a,b,c,d;
    cin>>a>>b>>c>>d;

    long long c_divi = helper(a,b,c);
    // cout<<c_divi<<endl;
    long long d_divi = helper(a,b,d);
    // cout<<d_divi<<endl;
    long long cm = (long long)gcd(c,d);
    // cout<<cm<<endl;
    cm = (long long)((c*d)/cm);

    cm = helper(a,b,cm);
    long long tot = (long long)((long long)(b-a)+1);
    cout<<(long long)(tot-((c_divi+d_divi)-cm));


    return 0;
}