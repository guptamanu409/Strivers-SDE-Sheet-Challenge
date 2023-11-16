#include<bits/stdc++.h>
using namespace std;

bool helper(int i){

    bool check = true;
    for(int j = 2; j<i; j++){
        if(i%j==0){
            check = false;
            break;
        }
    }
    return check;
}

int main(){

    int n,m;
    cin>>n>>m;
    int num = 0;
    for(int i = n+1; i<=m; i++){
        if(helper(i)){
            num = i;
            //(i==m)? cout<<"YES"<<endl : cout<<"NO"<<endl;
            break;
        }
    }

    (num==m)? cout<<"YES"<<endl : cout<<"NO"<<endl;

    return 0;
}