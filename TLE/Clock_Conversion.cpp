#include<bits/stdc++.h>
using namespace std;

#define endl '\n'

int main(){

    ios::sync_with_stdio(false);
    cin.tie(NULL);


    int t;
    cin>>t;

    while(t--){

        string s;
        cin>>s;

        int num = stoi(s.substr(0,2));
        if(num==0){
            cout<<"12:"<<s[3]<<s[4]<<" "<<"AM"<<endl;
        }
        else if(num<12){
            cout<<s<<" "<<"AM"<<endl;
        }
        else if(num==12){
            cout<<s<<" "<<"PM"<<endl;
        }
        else{
            int rem = num-12;
            if(rem<10) cout<<"0"<<rem<<":"<<s[3]<<s[4]<<" "<<"PM"<<endl;
            else cout<<rem<<":"<<s[3]<<s[4]<<" "<<"PM"<<endl;
        }
    }

    return 0;
}