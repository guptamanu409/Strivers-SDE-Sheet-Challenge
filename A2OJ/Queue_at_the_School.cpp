#include<bits/stdc++.h>
using namespace std;


int main(){

    int n,t;
    cin>>n>>t;

    string s;
    cin>>s;

    if(n==1) cout<<s<<endl;

    else{
        string temp = s;
        while(t--){
            bool check = false;
            for(int i = n-2; i>=0; i--){
                if(s[i]=='B' && s[i+1]=='G'){
                    swap(temp[i],temp[i+1]);
                    check = true;
                }
            }
            s = temp;
            if(!check) break;
        }
        cout<<s<<endl;
    }

    return 0;
}