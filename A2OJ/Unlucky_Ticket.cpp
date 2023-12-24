#include<bits/stdc++.h>
using namespace std;

int main(){

    int n;
    cin>>n;

    string s;
    cin>>s;

    vector<int>a,b;

    for(int i = 0; i<n; i++){
        a.push_back((int)(s[i]-'0'));
    }

    for(int i = n; i<2*n; i++){
        b.push_back((int)(s[i]-'0'));
    }

    sort(a.begin(),a.end());
    sort(b.begin(),b.end());

    if(a[0]<b[0]){
        for(int i = 0; i<n; i++){
            if(a[i]>=b[i]){
                cout<<"NO"<<endl;
                return 0;
            }
        }
        cout<<"YES"<<endl;
    }

    else{
        for(int i = 0; i<n; i++){
            if(a[i]<=b[i]){
                cout<<"NO"<<endl;
                return 0;
            }
        }
        cout<<"YES"<<endl;
    }

    return 0;
}