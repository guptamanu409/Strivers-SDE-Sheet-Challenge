#include<bits/stdc++.h>
using namespace std;

int main(){

    ios::sync_with_stdio(false);
    cin.tie(NULL);

    vector<vector<int>>arr(3,vector<int>(3,1));
    vector<pair<int,int>>v;
    for(int i = 0; i<3; i++){
        for(int j = 0; j<3; j++){
            int x;
            cin>>x;
            if(x&1) v.push_back({i,j});
        }
    }

    for(auto it:v){
        int row = it.first;
        int col = it.second;

        //same cell
        arr[row][col] = !arr[row][col];
        
        //up
        if(row-1>=0) arr[row-1][col] = !arr[row-1][col];

        //right
        if(col+1<3) arr[row][col+1] = !arr[row][col+1];

        //down
        if(row+1<3) arr[row+1][col] = !arr[row+1][col];

        //left
        if(col-1>=0) arr[row][col-1] = !arr[row][col-1]; 
    }

    for(auto row:arr){
        for(auto it:row) cout<<it;
        cout<<endl;
    }



    return 0;
}