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

        vector<int>v(n+1,0);

        for(int i = 1; i<=n; i++){
            cin>>v[i];
        }

        int mini = INT_MAX;

        for(int i = 1; i<=n; i++){

            vector<int>visited(n+1,0);
            visited[i] = 1;
            int f = 0, c = 1;
            int start = i;
            while(true){
                if(visited[v[start]]==0){
                    visited[v[start]] = 1;
                    f++;
                    c++;
                    start = v[start];
                    if(f>=2){
                        mini = min(mini,c);
                        break;
                    }
                }
                else{
                    f++;
                    // c++;
                    if(f>=2){
                        mini = min(mini,c);
                        break;
                    }
                }
            }
        }

        cout<<mini<<'\n';
    }


    return 0;
}