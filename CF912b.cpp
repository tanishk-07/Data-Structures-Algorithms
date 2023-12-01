#include<bits/stdc++.h>
using namespace std;
#define int long long int

// Problem - https://codeforces.com/problemset/problem/1903/B

void solve(){
   int n;
   cin>>n;
   vector<vector<int>> v(n,vector<int>(n));
   for(int i=0 ; i<n ; i++){
      for(int j=0 ; j<n ; j++){
         cin>>v[i][j];
      }
   }

   if(n==1){
       cout<<"YES"<<"\n";
       cout<<1<<"\n";
   }else{
      vector<int> ans;
      for(int i=0 ; i<n ; i++){
         int maxx=INT_MAX;
         for(int j=0 ; j<n ;j++){
            if(i!=j){
               maxx=maxx&v[i][j];
            }
         }
         ans.push_back(maxx);
      }
      
      bool ok=true;
      for(int i=0 ; i<n ; i++){
         for(int j=i+1 ; j<n ;j++){
            if(i!=j){
               if((ans[i] | ans[j]) != v[i][j]){
                  ok=false;
                  break;
               }
            }
         }
      }

      if(ok){
         cout<<"YES"<<"\n";
         for(auto &it:ans) cout<<it<<" ";
         cout<<"\n";
      }else{
         cout<<"NO"<<"\n";
      }

   }
}
 
int32_t main() {
   std::ios::sync_with_stdio(false);
   std::cin.tie(nullptr);
 
   int t;
   cin >> t;
   for(int i=0 ; i<t  ; i++){
      solve();
   }
 
   return 0;
}
