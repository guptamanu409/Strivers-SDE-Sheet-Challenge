#include<bits/stdc++.h>
using namespace std;

int main(){

    ios::sync_with_stdio(false);
    cin.tie(NULL);


    int t;
    long long sx, sy, ex, ey;

    cin>>t>>sx>>sy>>ex>>ey;

    string s;
    cin>>s;

    map<char,pair<int,int>>mp;
    mp['S'] = {0,-1};
    mp['N'] = {0,1};
    mp['W'] = {-1,0};
    mp['E'] = {1,0};

    long long cnt = 0;
    bool check = false;
    for(int i = 0; i<t; i++){
        int x = 0, y = 0;
        x = mp[s[i]].first;
        y = mp[s[i]].second;

        if(x!=0){
            long long diff = (long long)abs(ex - sx);
            long long after = (long long)abs(ex - (sx+x));
            if(after<diff){
                //if(sx==ex) continue;
                sx = (long long)(sx+x);
                cnt++;
                if(sx==ex && sy==ey){
                    check = true;
                    break;
                }
                
            }
            else cnt++;
        }
        else{
            long long diff = (long long)abs(ey - sy);
            long long after = (long long)abs(ey - (sy+y));
            if(after<diff){
                //if(sy==ey) continue;
                sy = (long long)(sy+y);
                cnt++;
                if(sx==ex && sy==ey){
                    check = true;
                    break;
                }
                
            }
            else cnt++;
        }
    }

    (check)? cout<<cnt<<'\n' : cout<<-1<<'\n';


    return 0;
}