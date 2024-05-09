#include<bits/stdc++.h>
using namespace std;

int mySqrt(int x){
    if(x==0) return 0;
    if(x<=3) return 1;
    int i = 2;
    while(true){
        if(i>(x/i)) break;
        else i++;
    }
    return i-1;
}

int main(){

    cout<<mySqrt(INT_MAX);

    return 0;
}