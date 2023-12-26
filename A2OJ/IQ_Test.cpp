#include<bits/stdc++.h>
using namespace std;

int main(){
    
    char arr[4][4];

    for(int i = 0; i<4; i++){
        for(int j = 0; j<4; j++){
            cin>>arr[i][j];
        }
    }
    
    bool check = false;

    for(int i = 0; i<3; i++){
        for(int j = 0; j<3; j++){
            int d = 0, h = 0;
            if(arr[i][j]=='.')d++;
            else h++;
            
            if(arr[i][j+1]=='.')d++;
            else h++;

            if(arr[i+1][j]=='.')d++;
            else h++;

            if(arr[i+1][j+1]=='.')d++;
            else h++;

            if((d==3 && h==1) || (h==3 && d==1) || (d==4 && h==0) || (h==4 && d==0)){
                cout<<"YES"<<'\n';
                return 0;
            }

        }
    }

    cout<<"NO"<<'\n';

    return 0;
}