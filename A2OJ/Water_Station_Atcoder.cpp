#include<bits/stdc++.h>
using namespace std;

int main(){

    int arr[101] = {0};

    for(int i = 0; i<=100; i+=5) arr[i] = 1;

    int n;
    cin>>n;

    if(arr[n]) cout<<n<<'\n';
    else{
        int left = n, right = n;
        while(!arr[left]) --left;
        while(!arr[right]) ++right;

        (n-left<right-n)? cout<<left<<'\n' : cout<<right<<'\n';
    }

    return 0;
}