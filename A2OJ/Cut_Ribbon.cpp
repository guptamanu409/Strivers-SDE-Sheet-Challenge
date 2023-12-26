#include<bits/stdc++.h>
using namespace std;

int main(){

    int n,a,b,c;
    cin>>n>>a>>b>>c;

    set<int>mp;
    mp.insert(a);
    mp.insert(b);
    mp.insert(c);

    vector<int>arr(mp.size(),0);
    int i = 0;
    for(auto &it:mp){
        arr[i] = it;
        i++;
    }
    int maxi = INT_MIN;
    do{

        int x = n;
        int r = 0;
        int sum = 0;
        for(int i = 0; i<arr.size(); i++){
            r = (x%arr[i]);
            sum += (x/arr[i]);
            x = (x%arr[i]);
            if(r!=0 && x==0) x = r;
        }

        if(r==0) maxi = max(maxi,sum);
    }while(next_permutation(arr.begin(),arr.end()));

    cout<<maxi<<'\n';

    return 0;
}