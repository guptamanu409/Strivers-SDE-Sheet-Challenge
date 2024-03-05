#include<bits/stdc++.h>
using namespace std;

class MyComparator{

    public:
        bool operator()(const pair<int,int>&a, const pair<int,int>&b) const{
            return a.first>b.first;
        }

}; // Ye "set" ke sath if want to use pair

bool comparator(const pair<int,int>&a, const pair<int,int>&b){
    return a.first>b.first;
    
} // Ye normal agar "Vector" ke sath use karna ho

