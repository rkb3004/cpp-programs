#include<bits/stdc++.h>
using namespace std;

class Graph{
public:
    unordered_map<int, list<int>> adjList;

    void addEdge (int u, int v, bool dir){
        adjList[u].push_back(v);
        if(dir==0){
            adjList[v].push_back(u);
	    
        }
    }

    void printList(){
	for(auto node: adjList){
		cout<<node.first<<"->";
		for(auto neighbour : node.second){
			cout<<neighbour<<',';
		}
		cout<<endl;
	}

    }

};
int main(){
Graph g;
g.addEdge(1,2,1);
g.addEdge(0,2,1);
g.addEdge(0,1,1);

g.printList();
}
