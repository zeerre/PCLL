//*************************************************************************
//* File Name: bdfs.cpp
//* Author:GeekBear
//* Mail:zeerre98988@gmail.com 
//* Created And Modified Time: ====2022-11-13  22-42-42====
//*************************************************************************

#include <iostream>
#include<bits/stdc++.h>
using namespace std;
class G{
    int numVertices;
    list<int>* adjLists;
    bool * visited;
    public:
    G(int v);
    void edge1(int src,int dest);
    void edge2(int src,int dest);
    void dfs(int vertex);
    void bfs(int vertex);
};
G::G(int vertices){
    numVertices=vertices;
    adjLists=new list<int>[vertices];
    visited=new bool[vertices];
}
void G::edge1(int src,int dest){
    adjLists[src].push_front(dest);
}
void G::edge2(int src,int dest){
    adjLists[src].push_back(dest);
    adjLists[dest].push_back(src);
}
void G::dfs(int vertex){
    visited[vertex]=true;
    cout<<vertex<<" ";
    list<int>adjList=adjLists[vertex];
    list<int>::iterator i;
    for(i=adjList.begin();i!=adjList.end();i++){
        if(!visited[*i])
            dfs(*i);
    }
}
void G::bfs(int startvertex){
    visited=new bool[numVertices];
    for(int i=0;i<numVertices;i++)
        visited[i]=false;
    list<int>queue;
    visited[startvertex]=true;
    queue.push_back(startvertex);
    list<int>::iterator i;
    while(!queue.empty()){
        int currvertex=queue.front();
        cout<<currvertex<<" ";
        queue.pop_front();
        for(i=adjLists[currvertex].begin();i!=adjLists[currvertex].end();i++){
            int adjvertex=*i;
            if(!visited[adjvertex]){
                visited[adjvertex]=true;
                queue.push_back(adjvertex);
            }
        }
    }
}
int main() {
    G g(5);
    g.edge1(0,1);
    g.edge1(0,2);
    g.edge1(1,3);
    g.edge1(3,4);
    g.dfs(0);
    cout<<endl;
    g.edge2(0,1);
    g.edge2(0,2);
    g.edge2(2,3);
    g.edge2(3,4);
    g.bfs(2);
    cout<<endl;

    return 0;
}
