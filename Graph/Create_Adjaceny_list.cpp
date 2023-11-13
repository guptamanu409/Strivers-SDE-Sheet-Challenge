#include<bits/stdc++.h>
using namespace std;

vector < vector < int >> printAdjacency(int n, int m, vector < vector < int >> & v) {
    
    vector<vector<int>>al(n);
    for(int i = 0; i<n; i++) al[i].push_back(i);  // adding nodes value

    //0 - > {1,2,3};
//    ye zero bhi toh add hoga na
//   aise hi sare nodes value add honge

    for(int row = 0; row<m; row++){
        // each column is of size 2 indicating the edge between two nodes in an Undirected Graph  -> 2*E
        al[v[row][0]].emplace_back(v[row][1]);
        al[v[row][1]].emplace_back(v[row][0]); 
    }
    return al;


    //v.size() ==  m 
    // that is the number of edges


}