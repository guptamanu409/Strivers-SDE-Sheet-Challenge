#include<bits/stdc++.h>
using namespace std;

int main(){

    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin>>t;

    while(t--){

        string s;
        cin>>s;

        unordered_map<char, int> red,green;
        int n = s.size();
        int i = 0;
        sort(s.begin(), s.end());
        long long ans = 0;
        while(true){
            if(i+1<n){
                if((red[s[i]]==0) && (green[s[i+1]]==0)){
                    red[s[i]]++;
                    green[s[i+1]]++;
                    i+=2;
                    ans++;
                }
                else if((red[s[i+1]]==0) && (green[s[i]]==0)){
                    red[s[i+1]]++;
                    green[s[i]]++;
                    i+=2;
                    ans++;
                }
                else i++;
            }
            else break;
        }
        // for(auto &it:red) cout<<it.first<<" "<<it.second<<" ";
        // cout<<endl;
        // cout<<red.size()<<'\n';  // check karte hue hi value daal di

        cout<<ans<<'\n';
    }


    return 0;
}