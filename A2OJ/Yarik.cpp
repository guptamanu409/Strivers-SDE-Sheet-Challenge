#include<bits/stdc++.h>
using namespace std;

int main(){

    ios::sync_with_stdio(false);
    cin.tie(NULL);


    int t;
    cin>>t;


    while(t--){

        long long n;
        cin>>n;

        vector<int>v;
        for(int i = 0; i<n; i++){
            int x;
            cin>>x;
            v.push_back(x);
        }

        long long maxi = INT_MIN;

        for(int i = 0; i<n; i++){
            long long sum = v[i];
            bool check = (v[i]&1)? false : true;
            maxi = max(maxi,sum);
            for(int j = i+1; j<n; j++){
                if(check){
                    if(v[j]&1){
                        sum+=v[j];
                        maxi = max(maxi,sum);
                        check = !check;
                    }
                    else{
                        maxi = max(maxi,sum);
                        break;
                    }
                }

                else{
                    if((v[j]&1)==0){
                        sum+=v[j];
                        maxi = max(maxi,sum);
                        check = !check;
                    }
                    else{
                        maxi = max(maxi,sum);
                        break;
                    }
                }
            }
        }

        cout<<maxi<<endl;
    }

    return 0;
}