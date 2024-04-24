#include<bits/stdc++.h>
using namespace std;

int main(){

    int h,w;
    cin>>h>>w;
    // h++;
    // w++;
    // vector<vector<string>>a(h,vector<string>(w));
    // vector<vector<string>>b(h,vector<string>(w));

    vector<string>a;
    vector<string>b;
    a.push_back("");

    for(int i = 1; i<=h; i++){
        string s;
        s.push_back(' ');
        for(int j = 1; j<=w; j++){
            char x;
            cin>>x;
            s.push_back(x);
        }
        a.push_back(s);
    }
    b.push_back("");
    for(int i = 1; i<=h; i++){
        string s;
        s.push_back(' ');
        for(int j = 1; j<=w; j++){
            char x;
            cin>>x;
            s.push_back(x);
        }
        b.push_back(s);
    }
    
    // for(int i = 1; i<=h; i++){
    //     for(int j = 1; j<=w; j++){
    //         cin>>b[i][j];
    //     }
    // }

    for(int s = 0; s<h; s++){
        for(int t = 0; t<w; t++){
            // cout<<"For this value of s and t ";
            // cout<<s<<" "<<t<<'\n';
            bool check = true;
            for(int i = 1; i<=h; i++){
                for(int j = 1; j<=w; j++){
                    int r = (i+s)%h;
                    if(r==0)r = h;
                    int c = (j+t)%w;
                    if(c==0)c = w;
                    // cout<<i<<" "<<j<<"-----"<<r<<" "<<c<<'\n';
                    // cout<<a[r][c]<<" "<<b[i][j]<<'\n';
                    if(a[r][c]!=b[i][j]){
                        check = false;  
                        break;
                    }
                }
                if(!check)break;
            }
            // cout<<"--------";
            // cout<<'\n';
            if(check){
                cout<<"Yes"<<'\n';
                return 0;
            }
        }
    }

    cout<<"No"<<'\n';
    return 0;
}