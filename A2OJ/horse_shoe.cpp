#include<bits/stdc++.h>
using namespace std;

int main(){

    long long s1, s2, s3,s4;

    unordered_set<long long>mp;

    cin>>s1>>s2>>s3>>s4;

    mp.insert(s1);
    mp.insert(s2);
    mp.insert(s3);
    mp.insert(s4);

    cout<<4-mp.size()<<endl;

    return 0;
}