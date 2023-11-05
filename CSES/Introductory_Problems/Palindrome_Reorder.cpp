#include<bits/stdc++.h>
using namespace std;


int main(){


    ios::sync_with_stdio(false);
    cin.tie(NULL);

    string s;
    cin>>s;

    int n = s.size();
    int freq[26] = {0};

    for(int i = 0; i<n; i++){
        freq[s[i]-65]++;
    }

    // If no of odds are more than 1, then there cannot be any palindrome ever
    int oddPos = -1;
    int cnt = 0;
    for(int i = 0; i<26; i++){
        if(freq[i]&1){
            oddPos = i;
            cnt++;
            if(cnt>1){
                cout<<"NO SOLUTION"<<endl;
                return 0;
            }
        }
    }

    //cout<<"Ye execute nahi hua hai";

    //String even and contains 1 odd character
    if((n&1)==0 && cnt>=1){
        cout<<"NO SOLUTION"<<endl;
        return 0;
    }
    string ans = "";
    for(int i = 0; i<26; i++){
        if((freq[i]>0) && (freq[i]&1)==0){
            for(int j = 1; j<=(freq[i]/2); j++) ans+= (char)(i+65);
        }
    }
    cout<<ans;
    if(oddPos!=-1){
        for(int i = 1; i<=freq[oddPos]; i++) cout<<(char)(oddPos+65);
    } 

    reverse(ans.begin(),ans.end());
    cout<<ans;

    return 0;   
    
}