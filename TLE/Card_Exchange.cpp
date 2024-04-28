#include<bits/stdc++.h>
using namespace std;

#define endl '\n'
class MyComparator{

    public:
        bool operator()(const pair<int,int>&a, const pair<int,int>&b) const{
            return a.second>=b.second;
        }

};

int main(){

    ios::sync_with_stdio(false);
    cin.tie(NULL);

    // freopen("input.txt","r",stdin);
    // freopen("output.txt","w",stdout);

    int t;
    cin>>t;

    while(t--){
        int n,k;
        cin>>n>>k;

        map<int,int>mp;
        set<int>st;
        set<pair<int,int>,MyComparator>stt;
        for(int i = 0; i<n; i++){
            int x;
            cin>>x;
            mp[x]++;
            st.insert(x);
        }

        
        for(auto &it:mp){
            stt.insert({it.first,it.second});
            // cout<<it.first<<" "<<it.second<<endl;
        }


        int rem = 0;
        for(auto &it:stt){
            int f = it.second;
            if((f+rem)<k) break;
            else{
                bool check = true;
                while(check){
                    f = f+rem;
                    if(f<k) check = false;
                    if((f-k)==0){
                        rem = (k-1);
                        // st.erase(it.first);
                        n = n-it.second;
                        check = false;
                    }
                    else{
                        // rem = (f/k)*(k-1);
                        // f = f%k;

                        rem = (k-1);
                        f = f-k;
                        
                    }
                }
            }
        }

        cout<<n+rem;
        cout<<'\n';
    }

    return 0;
}