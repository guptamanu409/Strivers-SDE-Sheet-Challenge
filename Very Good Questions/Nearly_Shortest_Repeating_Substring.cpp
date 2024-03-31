#include<bits/stdc++.h>
using namespace std;

vector<vector<int>>factors(2e5+1);
void compute(){

    for(int i = 1; i<=2e5; i++){
        for(int j = i; j<=2e5; j+=i){
            factors[j].push_back(i);
        }
    }
}


int main(){

    ios::sync_with_stdio(false);
    cin.tie(NULL);
    compute();
    int t;
    cin>>t;

    while(t--){

        int n;
        cin>>n;

        string s;
        cin>>s;

        for(auto divisor:factors[n]){

            //Checking with first K string with all the remaining
            int cnt = 0;
            for(int i = divisor; i<n && cnt<=1; i++){
                cnt+= (s[i]!=s[i%divisor]);
            }

            if(cnt<=1){
                cout<<divisor<<'\n';
                break;
            }

            //First K didn't work so now Checking with second K with the remaining till end
            cnt = 0;
            for(int i = divisor*2; i<n && cnt<=2; i++){
                cnt+= (s[i]!=s[divisor + (i%divisor)]);
            }

            // Now checking the First with the second K
            for(int i = 0; i<divisor && cnt<=1; i++){
                cnt+= (s[i]!=s[divisor + (i%divisor)]);
            }

            if(cnt<=1){
                cout<<divisor<<'\n';
                break;
            }

        }
    }


    return 0;
}