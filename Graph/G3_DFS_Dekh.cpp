#include<bits/stdc++.h>
using namespace std;

void dfs(vector<int>al[],vector<int>&vis,vector<int>&temp, int node){

    if(!vis[node]){
        vis[node] = 1;
        temp.push_back(node);
    }

    for(auto it:al[node]){ // For all the neighbours of the node
        if(!vis[it]){
            dfs(al,vis,temp,it);
        }
    }
}

vector<vector<int>> depthFirstSearch(int V, int E, vector<vector<int>> &edges)
{
    // DFS Traversal Karna hai on Undirected Graph -> 2*E
    // Disconnected Components bhi hai
    // Adjacency List not given bas edges de rakhi hai



    // First Create the Adjacency List
    // Create Visited array
    // 2D vector mein bas push_back kar rows will change on it's own ✅✅
    // Disconnected Components so make call for each the nodes 
    // If already visited skip

    // edges.size() == E that is the number of Edges
    // edges have only 2 columns

    //Adjacency List
    vector<int>al[V];

    // Adding values of Nodes
    //  0 -> {}     1 -> {}
    for(int nodeValue=0; nodeValue<V; nodeValue++) al[nodeValue].push_back(nodeValue);

    // Marking the edges between nodes
    for(int row=0; row<E; row++){
        int u,v;
        u = edges[row][0];
        v = edges[row][1];
        al[u].push_back(v); // Undirected Graph
        al[v].push_back(u); // Undirected Graph
    }

    //Creating Visited Array
    vector<int>vis(V,0);

    // Answer 2D vector
    vector<vector<int>>ans;

    // Making calls on all the Disconnected Components
    for(int node = 0; node<V; node++){
        if(!vis[node]){
            vector<int>temp;
            dfs(al,vis,temp, node);
            ans.push_back(temp);
        }
    }

    return ans;
}