//*************************************************************************
//* File Name: dfs1.cpp
//* Author:GeekBear
//* Mail:zeerre98988@gmail.com 
//* Created And Modified Time: ====2022-11-12  00-34-59====
//*************************************************************************

#include <bits/stdc++.h>

using namespace std;
class Graph{
    int numvertices;
    list<int>*adjLists;
    bool *visited;
    public:
    Graph(int v);
    void addedge(int src,int dest);
    void dfs(int vertex);
};
Graph::Graph(int vertices){
    numvertices=vertices;
    adjLists=new list<int>[vertices];
    visited=new bool[vertices];
}
void Graph::addedge(int src,int dest){
    adjLists[src].push_front(dest);
}
void Graph::dfs(int vertex){
    visited[vertex]=true;
    list<int>adjList=adjLists[vertex];
    cout<<vertex<<" ";
    list<int>::iterator i;
    for(i=adjList.begin();i!=adjList.end();i++)
        if(!visited[*i])
            dfs(*i);
}
int main() {
    Graph g(10);
    g.addedge(1,0);
    g.addedge(0,2);
    g.addedge(1,3);
    g.addedge(1,6);
    g.addedge(1,8);
    g.addedge(6,9);
    g.addedge(9,4);
    g.addedge(8,5);
    g.addedge(5,7);
    g.dfs(1);
    cout<<endl;
    return 0;
}
