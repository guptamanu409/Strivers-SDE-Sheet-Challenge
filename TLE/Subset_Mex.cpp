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
        // int temp = n;
        vector<int>arr(101,0);
        while(n--){
            int x;
            cin>>x;
            arr[x]++;
        }
        int sum = 0;
        for(int i = 0; i<101; i++){
            if(arr[i]==0){
                sum+=i;
                break;
            }
        }

        for(int i = 0; i<101; i++){
            if(arr[i]<2){
                sum+=i;
                break;
            }
        }
        cout<<sum<<'\n';
    }

    return 0;
}