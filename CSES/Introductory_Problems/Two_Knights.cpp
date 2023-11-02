#include<bits/stdc++.h>
using namespace std;

int main(){

    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n; 
    cin>>n;

    if(n==1) cout<<0<<endl;

    else{
        cout<<0<<endl;
        for(long long i = 2; i<=n; i++){
            
            long long total_combi = (i*i) * ((i*i)-1)/2;
            long long attack_combi = 4*(i-1)*(i-2);
            long long non_combi = total_combi - attack_combi;
            
            if(i==2) cout<<total_combi<<endl;
            else cout<<non_combi<<endl;

            
        }
    }
    

    return 0;
}