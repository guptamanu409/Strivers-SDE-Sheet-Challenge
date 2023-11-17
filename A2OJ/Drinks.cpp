#include<bits/stdc++.h>
using namespace std;


int main(){

    ios::sync_with_stdio(false);
    cin.tie(NULL);

    cout<< setprecision(14)<< fixed;

    int n;
    cin>>n;

    long double sum = 0;

    for(int i = 0; i<n; i++){
        long double x;
        cin>>x;
        sum+=x;
    }
    sum= sum * (long double)1.0;

    sum = (long double)((long double)sum/(long double)100.0);

    long double ans = 0.0;

    ans = (long double)((long double)sum/(long double)((n)))*1.0;

    ans = (long double)((long double)ans*(long double)100.0);
    // cout; 
    
    cout<<ans<<endl;

    // if(ans<1e-4) cout<< setprecision(14) <<(long double)ans<<endl;


    return 0;
}