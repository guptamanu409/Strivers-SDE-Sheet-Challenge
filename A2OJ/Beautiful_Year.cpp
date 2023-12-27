#include<bits/stdc++.h>
using namespace std;


int main(){

    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin>>n;

    
    while(true){
        n++;
        int x = n;
        unordered_set<int>mp;
        while(x){
            mp.insert(x%10);
            x = x/10;
        }
        if(mp.size()==4){
            cout<<n<<'\n';
            break;
        }
        
    }



    // int n;
    // cin>>n;

    // while(true){
    //     n++;
    //     int temp = n;
    //     int arr[10] = {0};
    //     bool check = true;
    //     while(temp){
    //         int last = temp%10;
    //         arr[last]++;
    //         if(arr[last]>1){
    //             check = false;
    //             break;
    //         }
    //         temp = temp/10;
    //     }
    //     if(check){
    //         cout<<n<<endl;
    //         break;
    //     }

    // }

    return 0;
}