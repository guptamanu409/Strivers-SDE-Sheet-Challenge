#include<bits/stdc++.h>
using namespace std;

int main(){

    string s;
    cin>>s;

    int cnt = 1;
    bool check = false;

    int n = s.size();

    for(int i = 0; i<n-1; i++){
        if(s[i]==s[i+1]){
            cnt++;
            if(cnt>=7){
                check = true;
                break;
            }
        }
        else cnt = 1;
    }

    (check)? cout<<"YES"<<endl : cout<<"NO"<<endl;

    return 0;
}