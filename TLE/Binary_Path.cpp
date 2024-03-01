#include<bits/stdc++.h>
using namespace std;

#define endl '\n'

string ans = "";
vector<string>s;
long long count = 1;
void helper(int i, int j, int n, int m, string &t){
    if(i>=2 || j>=n) return;
    if(i==n-1 && j==m-1){
        if(ans.size()==0){
            ans = t;
            // return;
        }
        else if(t==ans){
            ::count++;
            // return;
        }
        else if(t<ans){
            ::count = 1;
            ans = t;
            
        }
        return;
    }
    if(i+1<2) t.push_back(s[i+1][j]);
    helper(i+1,j,n,m,t);
    t.pop_back();

    if(j+1<n) t.push_back(s[i][j+1]);
    helper(i,j+1,n,m,t);
    t.pop_back();

    return;
}

int main(){

    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin>>t;

    while(t--){

        int n;
        cin>>n;

        vector<vector<int>>arr(2,vector<int>(n,0));

        
        string x;
        cin>>x;
        s.push_back(x);
        cin>>x;
        s.push_back(x);
        string temp = "";
        temp+=s[0][0];
        helper(0,0,2,n,temp);
        cout<<ans<<endl;
    }

    


    // freopen("input.txt","r",stdin);
    // freopen("output.txt","w",stdout);

    return 0;
}