#include<bits/stdc++.h>
using namespace std;

class Comparator{
    public:
        bool operator()(const pair<char,int>&a, const pair<char,int>&b) const{
            return (a.second>=b.second);
        }
};

bool Compa(pair<const char,int>&a, pair<const char,int>&b){
    return (a.second>=b.second);
}


string frequencySort(string &s){
    int n = s.size();
    if(n==1) return s;
    else{

        map<char,int>mp;
        set<pair<char,int>, Comparator>st;
        for(auto &it:s){
            mp[it]++;
        }

        for(auto &it:mp){
            st.insert({it.first,it.second});
        }

        string ans = "";
        for(auto &it:st){
            int freq = it.second;
            while(freq--){
                ans+=it.first;
            }
        }
        // cout<<ans;
        return ans;

        // for(auto &it:st) cout<<it.second<<" ";
    }
    return "";
}

int main(){
    string s = "abbccc";
    frequencySort(s);


    return 0;
}