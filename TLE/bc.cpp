#include<bits/stdc++.h>
using namespace std;


int main(){


    vector<int>arr;
    for(int i = 0; i<10; i++) arr.push_back(i);

    for(auto &it:arr) cout<<it<<" ";
    cout<<endl;

    arr[2] = 555;

    for(auto &it:arr) cout<<it<<" ";
    cout<<endl;

    int l = 2;

    arr[l] = 999;
    
    for(auto &it:arr) cout<<it<<" ";
    cout<<endl;
    return 0;
}