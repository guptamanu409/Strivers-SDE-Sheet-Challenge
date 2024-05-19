#include<bits/stdc++.h>
using namespace std;

class Comparator{

    public:
        bool operator()(const long long &a, const long long &b) const{
            return a>=b;
        }


};


long long helper(long long a, long long b, long long ai){
    long long ans = 1;

    while(b){
        if(b&1) ans = ans*a;
        if(ans>(ai)) return 0;
        a = a*a;
        b = b>>1;
    }

    // return (ai%ans==0);
    return ans;
}

int main(){

    ios::sync_with_stdio(false);
    cin.tie(NULL);


    int t;
    cin>>t;


    while(t--){
        long long n,k;
        cin>>n>>k;

        vector<long long>v(n,0);

        long long maxi = LLONG_MIN;

        for(auto &it:v){
            cin>>it;
            maxi = max(maxi, it);
        }

        if(maxi==0) cout<<"YES"<<'\n';
        else{
            long long ele = 1;
            while(ele<maxi) ele*=k;
            bool check = true;
            while(ele>0){
                long long cnt = 0;
                for(int i = 0; i<n; i++){
                    if(v[i]>=ele){
                        v[i] = v[i] - ele;
                        cnt++;
                    }
                    if(cnt>1){
                        check = false;
                        break;
                    }
                }
                if(!check) break;
                ele = ele/k;
            }
            // (check)? cout<<"YES" : cout<<"NO";
            if(!check) cout<<"NO";
            else{
                check = true;
                for(auto &it:v){
                    if(it!=0){
                        cout<<"NO";
                        check = false;
                        break;
                    }
                }
                if(check) cout<<"YES";
            }
            cout<<'\n';
        }
    }



    /* Below approach is wrong and not working */
    
    // while(t--){

    //     int n,k;
    //     cin>>n>>k;

    //     // vector<long long>v(n,0);
    //     multiset<long long,Comparator>v;
    //     int zcnt = 0;
    //     long long maxi = LLONG_MIN;
    //     long long odd = 0;
    //     for(int i = 0; i<n; i++){
    //         long long x;
    //         cin>>x;
    //         // cin>>it;
    //         zcnt += (x==0);
    //         if(x!=0) v.insert(x);
    //         maxi = max(maxi,x);
    //         odd += ((x%k)!=0);

    //     }

    //     if(zcnt==n) cout<<"YES"<<'\n';
    //     else if(odd-1>zcnt) cout<<"NO"<<'\n';
    //     else{
    //         bool check = true;
    //         for(int i = n-1; i>=0; i--){
    //             long long p = helper(k,i,maxi);
    //             if(p==0){
    //                 if(zcnt==0){
    //                     check = false;
    //                     break;
    //                 }
    //                 else zcnt--;
    //             }
    //             else{
    //                 check = false;
    //                 for(auto it = v.begin(); it!=v.end(); it++){
    //                     if(*it%p==0){
    //                         // long long ele = it;
    //                         // auto pos = v.find(ele); 
    //                         // cout<<*it<<" "<<'\n';
    //                         // v.erase(it);
    //                         // v.erase(pos);
    //                         v.erase(it);
    //                         // cout<<"Size after deletion "<<v.size()<<'\n';
    //                         check = true;
    //                         break;
    //                     }
    //                 }
                    
    //                 if((!check && (zcnt==0)) || (v.size()==0)) break;
    //                 else if(!check) zcnt--;
    //                 // maxi = *max_element(v.begin(),v.end());
                    
    //                 /*
    //                 if(v.size()==0){
    //                     check = (zcnt>=1)? true : false;
    //                     break;
    //                 }
    //                 else{
    //                     check = false;
    //                     for(auto it = v.begin(); it!=v.end(); it++){
    //                         if(*it%p==0){
    //                             // long long ele = it;
    //                             // auto pos = v.find(ele); 
    //                             // cout<<*it<<" "<<'\n';
    //                             // v.erase(it);
    //                             // v.erase(pos);
    //                             v.erase(it);
    //                             // cout<<"Size after deletion "<<v.size()<<'\n';
    //                             check = true;
    //                             break;
    //                         }
    //                     }
                        
    //                     if((!check && (zcnt==0)) || (v.size()==0)) break;
    //                     else if(!check) zcnt--;
    //                     maxi = *max_element(v.begin(),v.end());
    //                 }
    //                 */
    //             }
    //         }

    //         (check)? cout<<"YES" : cout<<"NO";
    //         // (v.size()==0)? cout<<"YES" : cout<<"NO";
    //         cout<<'\n';
    //     }

        

    //     // bool check = true;
    //     // for(int i = n-1; i>=0; i--){
    //     //     if(v[i]==0)continue;
    //     //     else if(!helper(k,i,v[i])){
    //     //         check = false;
    //     //         break;
    //     //     }
    //     // }

        

    // } 

    return 0;
}