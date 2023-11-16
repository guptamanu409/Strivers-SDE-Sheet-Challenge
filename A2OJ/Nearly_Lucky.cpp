#include<bits/stdc++.h>
using namespace std;

int main(){

    string s;
    cin>>s;

    long double n = s.size();

    // if(n<=3 && n>=1) cout<<"NO"<<endl;

    // if(n>=5 && n<=6) cout<<"NO"<<endl;

    long long cnt = 0;

    for(long double i = 0; i<n; i++){
        if(s[i]=='4' || s[i]=='7') cnt++;
    }

    if(cnt==0) cout<<"NO"<<endl;

    else{
        bool check = true;
        while(cnt){
            if((cnt%10)!=4 && cnt%10!=7){
                check = false;
                break;
            }
            cnt = cnt/10;
        }

        (check)? cout<<"YES"<<endl:cout<<"NO"<<endl;
    }
    
     


    return 0;
}