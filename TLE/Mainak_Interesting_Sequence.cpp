#include<bits/stdc++.h>
using namespace std;

int main(){

    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin>>t;

    while(t--){

        int n,m;
        cin>>n>>m;

        if(n==1) cout<<"Yes"<<'\n'<<m<<'\n';
        else if(m<n || ((m&1) && ((n&1)==0))) cout<<"No"<<'\n';
        else if(m==n){
            cout<<"Yes"<<'\n';
            for(int i = 0; i<m; i++) cout<<1<<" ";
            cout<<'\n';
        }
        else{
            if(m&1){
                n--;
                int rem = m-n;
                cout<<"Yes"<<'\n';
                for(int i = 0; i<n; i++) cout<<1<<" ";
                cout<<rem<<'\n'; 
            }
            else{
                if(n&1){
                    n--;
                    int rem = m-n;
                    cout<<"Yes"<<'\n';
                    for(int i = 0; i<n; i++) cout<<1<<" ";
                    cout<<rem<<'\n';
                }
                else{
                    n = n-2;
                    cout<<"Yes"<<'\n';
                    for(int i = 0; i<n; i++) cout<<1<<" ";
                    int rem = m - n;
                    int q = rem>>1;
                    cout<<q<<" "<<q<<'\n'; 
                }
            }
        }
        
    }


    return 0;
}