#include<bits/stdc++.h>
using namespace std;

int main(){

    ios::sync_with_stdio(false);
    cin.tie(NULL);

    unordered_map<char, int>s1,s2;

    string ss;
    getline(cin,ss);
    //cin>>ss;

    string sss;
    getline(cin,sss);

    //cout<<ss;

    for(char &it:ss) s1[it]++;
    bool check = true;
    for(auto &it:sss){
        if(it==' ') continue;
        else if(s1[it]!=0) s1[it]--;
        else{
            check = false;
            break;
        } 
    }

    (check)? cout<<"YES" : cout<<"NO";


    return 0;
}