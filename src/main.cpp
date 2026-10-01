
#include <bits/stdc++.h>
using namespace std;
// Simple problem: compute shortest path lengths using BFS in an unweighted graph
int main(int argc, char** argv){
    ios::sync_with_stdio(false); cin.tie(nullptr);
    int n=5; vector<vector<int>> g={{1,2},{0,3},{0,3},{1,2,4},{3}}; // sample graph
    vector<int> dist(n, -1); queue<int> q; dist[0]=0; q.push(0);
    while(!q.empty()){int u=q.front();q.pop(); for(int v: g[u]) if(dist[v]==-1){dist[v]=dist[u]+1; q.push(v);} }
    for(int i=0;i<n;i++){ cout<<dist[i]<<(i+1==n?'
':' ');} return 0; }
