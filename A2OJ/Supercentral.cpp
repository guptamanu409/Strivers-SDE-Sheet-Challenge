#include<bits/stdc++.h>
using namespace std;


int main(){

    int n;
    cin>>n;

    vector<pair<int,int>>v(n,{0,0});

    int ans = 0;

    for(int i = 0; i<n; i++){
        int x,y;
        cin>>x>>y;
        v[i].first = x;
        v[i].second = y;
    }

    for(int i = 0; i<n; i++){
        int x = v[i].first;
        int y = v[i].second;
        bool le = false, ri = false, up  = false, down = false;
        for(int j = 0; j<n; j++){
            if(j==i) continue;
            else{
                int xx = v[j].first;
                int yy = v[j].second;

                if(xx>x && yy==y) ri = true;
                else if(xx<x && yy==y) le = true;
                else if(xx==x && yy<y) down = true;
                else if(xx==x && yy>y) up = true;
            }
        }
        if(le && ri && up && down) ans++;
    }

    cout<<ans<<endl;

    return 0;
}