#include<bits/stdc++.h>
using namespace std;

int main(){

    ios::sync_with_stdio(false);
    cin.tie(NULL);

    long long n;
    cin>>n;
    cout<<n<<" ";
    while(n>1){

        if((n&1)==0){
            n = n/2;
            cout<<n<<" ";
        }

        else{
            n = n*3;
            n++;
            cout<<n<<" ";
        }
    }
    cout<<endl;

}