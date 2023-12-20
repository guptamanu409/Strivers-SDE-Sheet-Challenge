#include<bits/stdc++.h>
using namespace std;

int main(){

    ios::sync_with_stdio(false);
    cin.tie(NULL);


    vector<vector<int>>v(5,vector<int>(5,0));

    for(int i = 0; i<5; i++){
        for(int j = 0; j<5; j++){
            cin>>v[i][j];
        }
    }

    vector<int>line(5,0);

    iota(line.begin(),line.end(),1);
    long long maxi = INT_MIN;
    do{

        long long sum = 0;
        //Starting
        sum+= v[line[0]-1][line[1]-1];
        sum+= v[line[1]-1][line[0]-1];

        sum+= v[line[2]-1][line[3]-1];
        sum+= v[line[3]-1][line[2]-1];

        //After first
        sum+= v[line[1]-1][line[2]-1];
        sum+= v[line[2]-1][line[1]-1];

        sum+= v[line[3]-1][line[4]-1];
        sum+= v[line[4]-1][line[3]-1];

        //After Second
        sum+= v[line[2]-1][line[3]-1];
        sum+= v[line[3]-1][line[2]-1];

        //After third
        sum+= v[line[3]-1][line[4]-1];
        sum+= v[line[4]-1][line[3]-1];

        maxi = max(maxi,sum);

    }while(next_permutation(line.begin(),line.end()));

    cout<<maxi<<'\n';
    return 0;
}