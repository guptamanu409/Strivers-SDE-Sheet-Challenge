#include<bits/stdc++.h>
using namespace std;

int main(){

    int n;
    cin>>n;

    int tf = 0, ff = 0, oh = 0;
    bool check = true;
    for(int i = 0; i<n; i++){
        int x;
        cin>>x;
        if(x==25)tf++;
        else if(x==50){
            if(tf==0){
                check = false;
                break;
            }
            else tf--,ff++;
        }
        else if(x==100){
            if(ff==0){
                check = false;
                break;
            }
            else ff--,oh++;
        }
    }

    (check)? cout<<"YES"<<endl : cout<<"NO"<<endl;

    return 0;
}