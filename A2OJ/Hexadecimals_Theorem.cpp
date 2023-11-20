#include<bits/stdc++.h>
using namespace std;

int main(){

    long long n;
    cin>>n;

    if(n==0) cout<<0<<" "<<0<<" "<<0<<endl;

    else if(n==1) cout<<0<<" "<<0<<" "<<1<<endl;

    else if(n==3) cout<<0<<" "<<1<<" "<<2<<endl;

    else if(n==2) cout<<0<<" "<<1<<" "<<1<<endl;

    else{
        vector<long long>v;

        v.push_back(0);
        v.push_back(1);

        long long pre = 0, age = 1;

        long long sum = pre + age;

        while(sum<=n){
            v.push_back(sum);
            pre = age;
            age = sum;

            sum = age + pre;
        }
        long long n = v.size();
        cout<<v[n-5]<<" "<<v[n-4]<<" "<<v[n-2]<<endl;
    }


    return 0;
}