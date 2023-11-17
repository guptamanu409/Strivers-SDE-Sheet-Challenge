#include<bits/stdc++.h>
using namespace std;

int main(){

    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int d;

    vector<int>v(4,0);

    for(int i = 0; i<4; i++){
        cin>>v[i];
    }

    cin>>d;

    sort(v.begin(),v.end());

    if(v[0]==1) cout<< d<<endl;


    else{
        int cnt = 0;
        vector<bool>mul(d+1,false);

        for(int i = 0; i<4; i++){
            for(int j = v[i]; j<=d; j+=v[i]){

                if(!mul[j]){
                    cnt++;
                    mul[j] = true;
                }
            }
        }

        cout<<cnt<<endl;
    }
    

    return 0;
}