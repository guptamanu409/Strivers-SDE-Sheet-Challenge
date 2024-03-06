#include<bits/stdc++.h>
using namespace std;

vector<int>v;

void compu(){
    v.push_back(4);
    v.push_back(7);
    v.push_back(47);
    v.push_back(74);
    v.push_back(447);
    v.push_back(474);
    v.push_back(477);
    v.push_back(744);
    v.push_back(747);
    v.push_back(774); 
}


int main(){

    compu();
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin>>n;
    bool check = false;
    for(int i = 0; i<v.size() && v[i]<=n; i++){
        if(n%v[i]==0){
            check = true;
            break;
        }
    }
    (check)? cout<<"YES" : cout<<"NO";
}