#include<bits/stdc++.h>
using namespace std;

int main(){

    string s1,s2,s3;

    cin>>s1>>s2>>s3;

    int n = s1.size();
    int m = s2.size();
    int z = s3.size();

    if(n+m!=z) {
        cout<<"NO"<<endl;
        return 0;
    }

    int arr1[26] = {0};
    int arr2[26] = {0};

    for(int i = 0; i<n; i++){
        arr1[s1[i]-'A']++;
    }

    for(int i = 0; i<m; i++){
        arr1[s2[i]-'A']++;
    }

    for(int i = 0; i<z; i++){
        arr2[s3[i]-'A']++;
    }

    bool check = true;
    for(int i = 0; i<26; i++){
        if(arr1[i]!=arr2[i]){
            check = false;
            break;
        }
    }

    (check)? cout<<"YES"<<endl : cout<<"NO"<<endl;

    return 0;
}