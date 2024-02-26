#include<bits/stdc++.h>
using namespace std;


int main(){

    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int col,row;
    cin>>col>>row;

    int arr[row][col];

    for(int i = 0; i<row; i++){
        for(int j = 0; j<col; j++){
            cin>>arr[i][j];
        }
    }

    map<pair<int,int>,int>mp;

    for(int i = 0; i<row; i++){
        for(int j = 0; j+1<col; j++){
            mp[{min(arr[i][j],arr[i][j+1]),max(arr[i][j],arr[i][j+1])}] = 1;
        }
    }

    int ans = 0;
    for(int i = 1; i<=col; i++){
        for(int j = i+1; j<=col; j++){
            if(!mp[{i,j}]) ans++;
        }
    }

    cout<<ans<<'\n';

    return 0;
}