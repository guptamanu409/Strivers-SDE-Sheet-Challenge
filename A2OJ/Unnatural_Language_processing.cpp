#include<bits/stdc++.h>
using namespace std;

void print(string &s, vector<int>&t){
    reverse(t.begin(),t.end());

    int n = s.size();
    int z = 0;
    for(int i = 0; i<t.size(); i++){
        int temp = t[i];
        while(temp--){
            cout<<s[z++];
        }
        n-=t[i];
        if(n!=0) cout<<'.';
    }
}

bool helper(string &s, long long n, vector<int>&t){
    if(n==0){
       print(s,t);
        return true;
    }
    bool check = false;
    if(n-2>=0){
        if((s[n-1]=='a' || s[n-1]=='e') && (s[n-2]=='b' || s[n-2]=='c' || s[n-2]=='d')){
            t.push_back(2);
            check = helper(s,n-2,t);
            if(check) return true;
            t.pop_back();
        }
    }

    if(n-3>=0){
        if((s[n-1]=='b' || s[n-1]=='c' || s[n-1]=='d') && (s[n-2]=='a' || s[n-2]=='e') && (s[n-3]=='b' || s[n-3]=='c' || s[n-3]=='d')){
            t.push_back(3);
            check = helper(s,n-3,t);
            if(check) return true;
            t.pop_back();
        }
    }
    return false;
}

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
        vector<int>t;
        helper(s,n,t);
        cout<<'\n';
    }

    return 0;
}