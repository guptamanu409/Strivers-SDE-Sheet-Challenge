#include<bits/stdc++.h>
using namespace std;

int main(){

    ios::sync_with_stdio(false);
    cin.tie(NULL);

    string s;
    cin>>s;

    if(s.size()<=3)cout<<"NO";
    else{
        int n = s.size();
        bool ab = false, ba = false;
        for(int i = 0; i<n-1; i++){
            if((!ab) && (!ba)){
                if(s[i]=='A' && s[i+1]=='B'){
                    ab = true;
                    i++;
                }
                else if(s[i]=='B' && s[i+1]=='A'){
                    ba = true;
                    i++;
                }
            }

            else if(!ab){
                if(s[i]=='A' && s[i+1]=='B'){
                    ab = true;
                    i++;
                }
            }
            else if(!ba){
                if(s[i]=='B' && s[i+1]=='A'){
                    ba = true;
                    i++;
                }
            }
            if((ab) && (ba)) break;
        }

        if ((ab) && (ba))cout<<"YES";
        else{
            ab = false, ba = false;
            for(int i = n-1; i>1; i--){
                if((!ab) && (!ba)){
                    if(s[i]=='B' && s[i-1]=='A'){
                        ab = true;
                        i--;
                    }
                    else if(s[i]=='A' && s[i-1]=='B'){
                        ba = true;
                        i--;
                    }
                }

                else if(!ba){
                    if(s[i]=='A' && s[i-1]=='B'){
                        ba = true;
                        i--;
                    }
                }
                else if(!ab){
                    if(s[i]=='B' && s[i-1]=='A'){
                        ab = true;
                        i--;
                    }
                }
                if((ab) && (ba)) break;
            }

            ((ab) && (ba))? cout<<"YES" : cout<<"NO";
        }

        
    }

    return 0;
}