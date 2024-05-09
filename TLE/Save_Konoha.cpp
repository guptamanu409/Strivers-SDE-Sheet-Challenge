#include<bits/stdc++.h>
using namespace std;

int main(){

    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin>>t;

    while(t--){

        int n,z;
        cin>>n>>z;

        priority_queue<int>pq;

        for(int i = 0; i<n; i++){
            int x;
            cin>>x;
            pq.push(x);
        }
        bool check = false;
        int cnt = 0;
        while(pq.top()>0){
            int temp = pq.top();
            pq.pop();
            if(temp>=z){
                check = true;
                cnt++;
                break;
            }
            else{
                z-= temp;
                pq.push(temp/2);
                cnt++;
            }
        }

        (check)? cout<<cnt<<'\n' : cout<<"Evacuate"<<'\n';
    }



    return 0;
}