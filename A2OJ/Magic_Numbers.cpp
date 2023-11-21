#include<bits/stdc++.h>
using namespace std;


int main(){

    string n;
    cin>>n;

    if(n[0]=='4'){
        cout<<"NO"<<endl;
        return 0;
    }

    int s = n.size();
    int cnt = 0;
    bool check = true;
    for(int i = 0; i<s; i++){
        if(n[i]=='1'){
            cnt = 0;
            continue;
        }
        else if(n[i]=='4'){
            cnt++;
            if(cnt>2){
                check = false;
                break;
            }
        }
        else{
            check = false;
            break;
        }
    }

    (check)? cout<<"YES"<<endl : cout<<"NO"<<endl;

    return 0;
}