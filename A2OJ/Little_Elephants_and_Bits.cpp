#include<bits/stdc++.h>
using namespace std;

int main(){

    string s;
    cin>>s;

    int one = -1;
    bool check = false;

    for(int i = 0; i<s.size(); i++){
        if(s[i]=='1' && one==-1) one = i;

        if(s[i]=='0' && one!=-1){
            s.erase(i,1);
            check = true;
            break;
        }
    }

    if(one==-1 || !check){
        for(int i = 0; i<s.size()-1; i++) cout<<s[i];
        cout<<endl;
    } 
    else{
        for(int i = one; i<s.size(); i++) cout<<s[i];
        cout<<endl;
    }

    return 0;
}