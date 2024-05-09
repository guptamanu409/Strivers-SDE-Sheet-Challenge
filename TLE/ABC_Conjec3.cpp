#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	
	int t;
	cin>>t;
	
	while(t--){
	    
	    int n;
	    cin>>n;
	    
	    string s;
	    cin>>s;
	    
	   // map<char,int>mp;
	    vector<int>mp(3,0);

        int ini = 0;
        bool check = true;
        int cnta = 0, cntb = 0, cntc = 0;
        for(int i = 0; i<n; i++){
            if(s[i]=='a' && check){
                ini = i;
                check = false;
                cnta++;
            }
            else if(s[i]=='a')cnta++;

        }

        check = true;
        for(int i = ini+1; i<n; i++){
            if(s[i]=='b' && check){
                cntb++;
                check = false;
                ini = i;
            }
            else if(s[i]=='b')cntb++;
        }

        // check = true;
        for(int i = ini+1; i<n; i++){
            if(s[i]=='c')cntc++;
        }

        if((cnta==0) || (cntb==0) || (cntc==0)) cout<<0<<'\n';
        else cout<<min(cnta,cntc)<<'\n';

	    /*
	    int i = 0;
	    while(i<n){
	        if(s[i]=='a'){
	            mp[0]++;
	            i++;
	            break;
	        }
	        else i++;
	    }
	    
	    if(i>=n-1){
	        cout<<0<<'\n';
	        // continue;
	    }
	    else{
            while(i<n){
                if(s[i]=='a') mp[0]++;
                else if(s[i]=='b'){
                    mp[1]++;
                    i++;
                    break;
                }
                else i++;
            }
            if(i>=n){
                cout<<0<<'\n';
                // continue;
            }
            else{
                while(i<n){
                    if(s[i]=='a') mp[0]++;
                    else if(s[i]=='b') mp[1]++;
                    else if(s[i]=='c'){
                        mp[2]++;
                        i++;
                        break;
                    }
                    else i++;
                }
                if(i>=n){
                    cout<<min(mp[0],mp[2])<<'\n';
                    // continue;
                }
                else{
                    while(i<n){
                        if(s[i]=='a') mp[0]++;
                        else if(s[i]=='b') mp[1]++;
                        else if(s[i]=='c'){
                            mp[2]++;
                        // i++;
                        // break;
                        }
                        i++;
                    }
                    cout<<min(mp[0],mp[2])<<'\n';
                }
                
            }
            
        }
	    
	    */
	    
	}
	
	
	return 0;

}
