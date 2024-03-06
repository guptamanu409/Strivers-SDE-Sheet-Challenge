#include<bits/stdc++.h>
using namespace std;

int main(){

    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin>>t;

    while(t--){

        vector<string>s;

        int n;
        cin>>n;

        for(int i = 0; i<n; i++){
            string x;
            cin>>x;
            s.push_back(x);
        }

        // even row = n/2    col = n/2

        // odd row = n/2    col = n/2   col++
        // middle wala bhi include karenge 
        // Java ki copy ke piche dekh ek bar

        // 4 Groups banege.... Only need to run for 1 Group 
        // Aur sare elements check ho jaenge

        int row = n/2, col = n/2;
        if(n&1) col++;
        int sum = 0;
        for(int i = 0; i<row; i++){
            for(int j = 0; j<col; j++){
                int ones = 0;
                ones+= s[i][j] - '0';         // 0 degree    0
                ones+= s[j][n-1-i] - '0';     // 90 degree  90
                ones+= s[n-1-i][n-1-j] - '0'; // 90 degree  180
                ones+= s[n-1-j][i] - '0';     // 90 degree  270

                if(ones==2)sum+=2;
                else if(ones==1 || ones==3)sum+=1;
            }
        }
        cout<<sum<<'\n';
    }

    return 0;
}