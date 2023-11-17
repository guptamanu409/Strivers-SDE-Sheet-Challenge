#include<bits/stdc++.h>
using namespace std;

int main(){


    int n; 
    cin>>n;

    int cnt = 0;
    int x;
    cin>>x;
    n--;
    //          maxi mini
    int arr[2] = {x, x};

    while(n--){
        int x;
        cin>>x;
        if(x>arr[0]){
            cnt++;
            arr[0] = x;
        }

        else if(x<arr[1]){
            cnt++;
            arr[1] = x;
        }
    }

    cout<<cnt<<endl;

    return 0;
}