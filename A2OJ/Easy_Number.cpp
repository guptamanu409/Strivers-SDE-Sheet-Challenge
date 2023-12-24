#include<bits/stdc++.h>
using namespace std;

#define m (int)1e6

vector<int>seive(m+1,1);
void pre(){
    int i = 2;
    for(; i<=m; i++){
        for(int j = i; j<=m; j+=i){
            seive[j]++;
        }
    }
}


int main(){
    pre();
    int a,b,c;
    cin>>a>>b>>c;
    long long sum = 0;

    for(int i = 1; i<=a; i++){
        for(int j = 1; j<=b; j++){
            for(int k = 1; k<=c; k++){
                long long mul = i*j;
                mul = mul*k;
                sum+=seive[mul];
            }
        }
    }

    cout<<sum<<endl;

    return 0;
}