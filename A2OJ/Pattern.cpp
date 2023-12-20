#include<bits/stdc++.h>
using namespace std;

int main(){

    int n;
    cin>>n;
    int temp = n-1;
    bool first = true;
    for(int i = 0; i<=(n*2)-2; i++){
        if((i==0) || (i==((n*2)-2))){
            for(int i = 0; i<n; i++) cout<<'*';
            //cout<<endl;
        }

        else if(i&1)cout<<endl;

        else{

            for(int i = 1; i<temp; i++) cout<<" ";
            cout<<'*';
            temp--;
        }
    }

    return 0;
}