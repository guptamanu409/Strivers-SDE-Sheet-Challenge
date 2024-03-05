#include<bits/stdc++.h>
using namespace std;

class MyComparator{

    public:
        bool operator()(const pair<int,int>&a, const pair<int,int>&b) const{
            return a.first>b.first;
        }

};

bool comparator(const pair<int,int>&a, const pair<int,int>&b){
    return a.first>b.first;
    
}


int main(){

    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin>>t;

    while(t--){

        int n;
        cin>>n;

        vector<pair<int,int>>a;
        vector<int>ans(n,0);

        for(int i = 0; i<n; i++){
            int x;
            cin>>x;
            a.push_back({x,i});
        }

        sort(a.begin(),a.end(),comparator);

        // for(auto &it:a) cout<<it.first<<" "<<it.second<<endl;

        long long sum = 0, val=1;

        // If taken int then try to think of the maximum value
        // 2 * 1e4 * 1e6 for the maximum value
        // it will go well beyond the range of int

        bool check = true;
        for(int i = 0; i<n; i++){
            long long temp = 0;
            if(check){
                ans[a[i].second] = val;
                temp = val*2;
                temp = temp * a[i].first;
                sum+=temp;
                check = false;
            }
            else{
                ans[a[i].second] = (val*-1);
                temp = val*2;
                temp = temp * a[i].first;
                sum+=temp;
                check = true;
                val++;
            }
        }

        cout<<sum<<'\n';
        cout<<0<<" ";
        for(auto &it:ans)cout<<it<<" ";
        cout<<'\n';

    }

    return 0;
}