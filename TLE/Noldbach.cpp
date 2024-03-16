#include<bits/stdc++.h>
using namespace std;

vector<int>v(1001,1);
vector<int>primes;
void seive(){
    v[0] = 0;
    v[1] = 0;
    for(int i = 2; i<=1000; i++){
        if(v[i]){
            primes.push_back(i);
            int p = i*i;
            while(p<=1000){
                v[p] = 0;
                p+=i;
            }
        }
    }
}

int main(){

    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n,k;
    

    // for(auto &it:primes) cout<<it<<" ";

    cin>>n>>k;
    if(k==0){
        cout<<"YES";
        return 0;
    }
    else if(n<=12){
        if(k!=0)cout<<"NO";
        else cout<<"YES";
        return 0;
    }
    seive();
    bool check = false;
    int start = lower_bound(primes.begin(),primes.end(),n) - primes.begin();
    if(!v[n]) start--;
    // if(n<13)
    for(; start>=5; start--){
        int temp = primes.size();
        for(int i = 0; i<temp; i++){
            int sum = primes[i];
            sum+=primes[i+1];
            sum+=1;
            if(sum==primes[start]){
                k--;
                if(k==0) check = true;
                break;
            }
            else if(sum>primes[start]) break;
        }
        if(check)break;
    }
    (check)? cout<<"YES" : cout<<"NO";

    // if(n>=31){
    //     if(k>=1 && k<=3) cout<<"YES";
    //     else cout<<"NO";
    // }
    // else if(n>=19){
    //     if(k>=1 && k<=2) cout<<"YES";
    //     else cout<<"NO";
    // }
    // else if(n>=13){
    //     if(k==1) cout<<"YES";
    //     else cout<<"NO";
    // }
    // else{
    //     if(k==0) cout<<"YES";
    //     else cout<<"NO";
    // }

    return 0;
}