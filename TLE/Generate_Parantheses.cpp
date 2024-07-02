#include<bits/stdc++.h>
using namespace std;

class Solution {
// private:
//     void perm(string &brac,int n , vector<string>&ans, int s = 0){
//         if(s>=n){
//             int sum = 0;
//             // (()))( will tell that it's invalid
//             for(auto it:brac){
//                 if(it=='(')++sum;
//                 else --sum;
//                 if(sum<0) return;
//             }
//             ans.push_back(brac);
//             return;
//         }

//         for(int i = s; i<n; i++){
//             if(i!=s && brac[i]==brac[i-1]) continue;
//             swap(brac[i],brac[s]);
//             if(brac[0]==')') break;
//             perm(brac,n,ans,s+1);
//             swap(brac[i],brac[s]);
//         }
//     }

public:

    vector<string>ans;

    void helper(int index, int brac, string s, int n){

        if(index==n){
            if(brac==0) ans.push_back(s);
            return;
        }

        helper(index+1,brac+1,s+"(",n);
        if(brac>0) helper(index+1,brac-1,s+")",n);

        return;
    }

    vector<string> generateParenthesis(int n) {
        
        if(n==1) return {"()"};

        helper(0,0,"",(n<<1));

        return ans;


        // 1st Approach below ----------------------------------

        // if(n==1) return {"()"};

        // vector<string>ans;
        // string brackets;
        // for(int i = 1; i<=n+n; i++){
        //     brackets+= (i<=n)? "(" : ")";
        // }
        // //cout<<brackets;
        // //return ans;

        // perm(brackets,brackets.size(), ans);
        // return ans;
    }
};


int main(){




    return 0;
}