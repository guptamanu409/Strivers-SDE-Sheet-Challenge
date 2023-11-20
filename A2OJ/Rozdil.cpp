#include<bits/stdc++.h>
using namespace std;

int main(){

    int n;
    cin>>n;

    bool check = true;
    int mini = INT_MAX;
    int index = 0;
    for(int i = 0; i<n; i++){
        int x;
        cin>>x;

        if(x<=mini){
            if(x==mini) check = true;
            else{
                mini = x;
                index = i+1;
                check = false;
            } 
        }
    }

    (check)? cout<<"Still Rozdil"<<endl : cout<<index<<endl;

    return 0;
}