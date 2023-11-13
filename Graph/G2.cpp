#include<bits/stdc++.h>
using namespace std;

int main(){

    // Graph represented in two i.e, using Adjacency Matrix or Adjacency List
    // Assuming 1 based Indexing

    
    // n -> nodes or vertices   m -> edges 

    // Undirected Graph - Adjacency Matrix

    //TC = O(m) -> Edges
    //SC = O(n*n) -> Nodes   very huge
    /*
    int n,m;
    cin>>n>>m;

    int adjm[n+1][n+1] = {0};

    for(int i = 0; i<m; i++){
        int u,v; // Value of nodes which are connected
        cin>>u>>v;
        adjm[u][v] = 1; // link between u - v
        adjm[v][u] = 1; // link between v - u  bidirectional edge is in Undirected Graph
    }
    */

    //Optimizing the space 

    // Undirected Graph - Adjacency List

    // normal syntax vector<int>v(size,value);

    int n,m;
    cin>>n>>m;
//                           square brackets hai
    vector<int>adjacency_list[n+1];
    // Assuming 1 based indexing

    // 1 -> {}
    // for(int nodeValue = 1; nodeValue<=n; nodeValue++) adjacency_list[nodeValue].push_back(nodeValue); 

    // adjacency_list[nodeValue] = nodeValue; ❌❌❌❌❌❌❌❌ This is not possible

    // Using array of vectors
    // each index itself is a vector
    /*
    for(int edges = 0; edges<m; edges++){
        int u,v;
        cin>>u>>v;
        adjacency_list[u].push_back(v); // link between u - v
        adjacency_list[v].push_back(u); // link between v - u  bidirectional edge is in Undirected Graph
    }

    // TC = O(m)
    // SC = O(2*m)  2 * No of Edges

    */

   // Directed Graph -> Adjacency List

   // Only 1 link right.... if u -> v 
   // then v -> u automatically not happen

   // Using array of vectors
    // each index itself is a vector

    // Assuming 1 based indexing

    // 1 -> {}
    // for(int nodeValue = 1; nodeValue<=n; nodeValue++) adjacency_list[nodeValue].push_back(nodeValue); 

    // adjacency_list[nodeValue] = nodeValue; ❌❌❌❌❌❌❌❌ This is not possible


    /*
    for(int edges = 0; edges<m; edges++){
        int u,v;
        cin>>u>>v;
        adjacency_list[u].push_back(v); // link between u - v
        
    }

    // TC = O(m)
    // SC = O(m)  No of Edges

    */

   // when passing the adjacency list to function

    //syntax
   //void addEdge(vector<int> adj[], int u, int v)



    return 0;
}