#include<bits/stdc++.h>
using namespace std;

int main(){

    ios::sync_with_stdio(false);
    cin.tie(NULL);

    // freopen("input.txt","r",stdin);
    // freopen("output.txt","w",stdout);

    int t;
    cin>>t;

    while(t--){

        int arr[3] = {0};
        for(int i = 0; i<3; i++){
            for(int j = 0; j<3; j++){
                char ch;
                cin>>ch;
                arr[(int)(ch-'A')]++;
            }
        }

        for(int i = 0; i<3; i++){
            if(arr[i]!=3) cout<<(char)(i+'A')<<'\n';
        }
    }

    return 0;
}