#include<bits/stdc++.h>
using namespace std;

int main(){

    string s;
    cin>>s;

    vector<string>ss;

    sort(s.begin(),s.end());

    do{
        ss.push_back(s);
    }while(next_permutation(s.begin(),s.end()));


    cout<<ss.size()<<endl;

    for(auto it:ss) cout<<it<<endl;

    return 0;
}