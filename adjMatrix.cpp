#include<bits/stdc++.h>
using namespace std;
#define int long long int
// Adjacency Matrix 
void solve(){
   int n,m; // N is no. of vertices and m is no. of edges
   cin>>n>>m;
   vector<vector<int>> graph(n+1,vector<int> (n+1,0));
   for(int i=0 ; i<m ; i++){
       int x,y;
       cin>>x>>y;
       graph[x][y]=1; // Initialising with 1 because its unweighted graph
       graph[y][x]=1; // Birected Graph
   }

   for(int i=0 ; i<graph.size() ; i++){
     for(int j=0 ; j<graph[i].size() ; j++){
         cout<<graph[i][j]<<" ";
     }
     cout<<"\n";
   }
    
   // Limitation : Fails when no. of vertices are very large >= 1e3
   
}
 
int32_t main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
 
    int t=1;
    for(int i=0 ; i<t  ; i++){
        solve();
    }
 
    return 0;
}