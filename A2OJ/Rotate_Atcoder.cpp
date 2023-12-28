#include<bits/stdc++.h>
using namespace std;

int main(){

    int n;
    cin>>n;

    // int arr[n][n];
    
    vector<string>arr;
    
    for(int i = 0; i<n; i++){
        string s;
        cin>>s;
        arr.push_back(s);
    }
    
    // for(auto &it:arr) cout<<it<<" ";
    // cout<<endl;

    char prev = arr[0][0];
    // cout<<prev;
    for(int j = 1; j<arr[0].size(); j++){
        char temp = arr[0][j];                     // pehle index par jo string hai uska jth character  1D se 2D kam 😲
        arr[0][j] = prev;
        prev = temp;
    }

    for(int i = 1; i<n; i++){
        char temp = arr[i][n-1];
        arr[i][n-1] = prev;
        prev = temp;
    }

    for(int j = n-2; j>=0; j--){
        char temp = arr[n-1][j];
        arr[n-1][j] = prev;
        prev = temp;
    }

    for(int j = n-2; j>=0; j--){
        char temp = arr[j][0];
        arr[j][0] = prev;
        prev = temp;
    }

    for(int i = 0; i<n; i++){
        cout<<arr[i];
        cout<<'\n';
    }
// --------------------------------------------------------------
    // for(int i = 0; i<n; i++){
    //     for(int j = 0; j<n; j++){
    //         cin>>arr[i][j];
    //     }
    // }

    // int prev = arr[0][0];
    // for(int j = 1; j<n; j++){
    //     int temp = arr[0][j];
    //     arr[0][j] = prev;
    //     prev = temp;
    // }

    // for(int i = 1; i<n; i++){
    //     int temp = arr[i][n-1];
    //     arr[i][n-1] = prev;
    //     prev = temp;
    // }

    // for(int j = n-2; j>=0; j--){
    //     int temp = arr[n-1][j];
    //     arr[n-1][j] = prev;
    //     prev = temp;
    // }

    // for(int j = n-2; j>=0; j--){
    //     int temp = arr[j][0];
    //     arr[j][0] = prev;
    //     prev = temp;
    // }

    // for(int i = 0; i<n; i++){
    //     for(int j = 0; j<n; j++){
    //         cout<<arr[i][j];
    //     }
    //     cout<<'\n';
    // }    

    return 0;
}