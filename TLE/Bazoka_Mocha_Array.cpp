#include<bits/stdc++.h>
using namespace std;

int main(){

    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin>>t;

    while(t--){

        int n;
        cin>>n;

        bool check = true;

        vector<long long>v(n,0);

        cin>>v[0];


        for(int i = 1; i<n; i++){
            // cin>>it;
            cin>>v[i];
            if(v[i]<v[i-1]) check = false;
        }

        if(check) cout<<"Yes"<<'\n';
        else{
            int tt = 0;
            vector<vector<long long>>vv;

            int i = 1;
            bool checker = false;
            while(i<n){
                if(v[i]>=v[i-1]){
                    while(i<n && v[i]>=v[i-1]) i++;
                    vv.push_back({v.begin()+tt,v.begin()+i});
                    if(i==n) {
                        checker = true;
                        break;
                    }
                    tt = i;
                    i++;
                }
                else{
                    while(i<n && v[i]<v[i-1]) i++;
                    vv.push_back({v.begin()+tt,v.begin()+i});
                    if(i==n) {
                        checker = true;
                        break;
                    }
                    tt = i;
                    i++;
                }
            }
            if(!checker) vv.push_back({v.begin()+tt,v.begin()+i});

            // cout<<vv.size();

            if((vv.size()==1) && (vv[0].size()==2)) cout<<"Yes"<<'\n';
            else if((vv.size()==1) || (vv.size()>2)) cout<<"No"<<'\n';
            else{
                vector<long long>v1 = vv[1];
                vector<long long>v2 = vv[0];

                long long maxi = *max_element(v1.begin(),v1.end());
                int n = v1.size();
                int n2 = v2.size();
                bool check = true;

                for(int i = 1; i<n; i++){
                    if(v1[i]<v1[i-1]){
                        check = false;
                        break;
                    }
                }

                for(int i = 1; i<n2; i++){
                    if(v2[i]<v2[i-1]){
                        check = false;
                        break;
                    }
                }

                int i = 0;
                while(i<n && v1[i]!=maxi && check){
                    if((find(v2.begin(),v2.end(),v1[i])!=v2.end()) || (v1[i]>v2[0])){
                        check = false;
                        break;
                    }
                    i++;
                }

                if(maxi>v2[0]) check = false;
                (check)? cout<<"Yes" : cout<<"No";
                cout<<'\n';
            }

        }

    }


    return 0;
}