#include<bits/stdc++.h>
using namespace std;

#define endl '\n'

vector<long long>a;
void b_s(long long n){
    long long ans = 1;
    long long b = 2;
    while(n>0){
        if(n&1){
            ans = ans * b;
        }
        n = n>>1;
        b*=b;
    }
    a.push_back(ans);
}

void compu(){
    for(int i = 0; i<=30; i++) b_s(i);
}

int main(){

    ios::sync_with_stdio(false);
    cin.tie(NULL);
    compu();
    int t;
    cin>>t;

    while(t--){

        long long n;
        cin>>n;

        long long index = lower_bound(a.begin(),a.end(),n) - a.begin();
        (a[index]==n)? cout<<n<<endl : cout<<a[--index]<<endl;

    }

    // freopen("input.txt","r",stdin);
    // freopen("output.txt","w",stdout);

    return 0;
}