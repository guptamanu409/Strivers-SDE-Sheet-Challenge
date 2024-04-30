#include<bits/stdc++.h>
using namespace std;

long long helper(string &s, int &i, long long &one){
    long long zero = 0;
    int n = s.size();

    while(i<n && s[i]=='1'){
        one++;
        i++;
    }

    while(i<n && s[i]=='0') zero++,i++;

    long long sum = (long long)(one+1)*zero;
    return sum;
}

int main(){

    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin>>t;

    while(t--){

        string s;
        cin>>s;

        long long sum = 0, one = 0, zero = 0;
        int n = s.size();
        int i = 0;
        while(i<n){
            if(s[i]=='1'){
                sum+=helper(s,i,one);
            }
            else i++;
        }
        cout<<sum<<'\n';
    }


    return 0;
}