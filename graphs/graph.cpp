#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cout<<"Enter number of nodes: ";
    cin>>n;
    vector<vector<int>> adj(n,vector<int>(n,0));

    int e;
    cout<<"Enter number of edges: ";
    cin>>e;
    
    for(int i =0; i<e; i++){
        int u,v;
        cout<<"Enter edge (u v): ";
        cin>>u>>v;
        adj[u][v] = 1; 
    }
    cout<<"Adjacency Matrix: \n";
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            cout<<adj[i][j]<<" ";
        }
        cout<<"\n";
    }
    return 0;
}