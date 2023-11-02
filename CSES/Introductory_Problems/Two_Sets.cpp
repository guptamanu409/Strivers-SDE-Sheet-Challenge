#include<bits/stdc++.h>
using namespace std;

void helper(long long &s, long long &e, vector<long long>&v, long long tar){
    long long sum = 0;
    if(v.size()!=0) sum = v[0];

    while(sum!=tar){
        v.push_back(s);
        v.push_back(e);
        sum+=s;
        sum+=e;
        s++;
        e--;
    }
    cout<<v.size()<<endl;
    for(auto it:v) cout<<it<<" ";
    cout<<endl;
}

int main(){

    ios::sync_with_stdio(false);
    cin.tie(NULL);

    long long n;
    cin>>n;

    long long sum = (long long)(n*(n+1)/2);
    if(sum&1) cout<<"NO"<<endl;

    else{
        cout<<"YES"<<endl;
        long long tar = sum/2;
        vector<long long>s1,s2;
        if((tar%n)==0){

            if(n&1){
                long long s = 1, e = n-1;
                s1.push_back(n);
                helper(s,e,s1, tar);
                helper(s,e,s2, tar);
            }
            
        }
        else{
            long long s = 1, e = n;
            helper(s,e,s1,tar);
            helper(s,e,s2,tar);
        }
    }

    return 0;
}