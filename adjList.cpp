#include<bits/stdc++.h>
using namespace std;
#define int long long int
// Adjacency List 
void solve(){
   int n,m; // No of edges and vertices
   cin>>n>>m;
   vector<vector<int>> graph(n+1);
   for(int i=0 ; i<m ; i++){
      int x,y;
      cin>>x>>y;
      graph[x].push_back(y);
      graph[y].push_back(x);
   }
   cout<<"List is "<<"\n";
   for(int i=0 ; i<graph.size() ; i++){
     cout<<i<<"->";
     for(auto &child : graph[i]){
        cout<<child<<" ";
     }
     cout<<"\n";
   }
   
   // Graph[i] contains all the edges connected to i
   //ex : 0 -> 1 , 2 , 3 , 4 (O connected to 1,2,3,4)
   //     1 -> 0             (1 connected to 0)
   // Consumes less space then adjacency matrix O(n+m)
   
   // Limitations : If we ask whether i and j are connected
   // Its easier to tell in adj. matrix in O(1) time but here we have to traverse
   // O(n) time basically
   
   // If it is weighted grahp then how to take input ?
   // We have to make vector<vector<pair<int,int>>> v;
   // And then insert v[x].push_back({y,z});  x,y (vertices) and z (weight of edge connecting them)
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