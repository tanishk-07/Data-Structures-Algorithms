// Upper Bound in vector pairs or simply vector
// DO - pair<int,int> p= make_pair(x,INT_MAX) // So that second element won't interfere in the process

#include<bits/stdc++.h>
using namespace std;
#define int long long int
 
void solve(){
   int n;
   cin>>n;
   vector<int> v(n);
   for(auto &it:v){
      cin>>it;
   }

   // Our task is to find the no. of elements which are less than / equal to their prefixes
   // using upper_bound ( we can do it with upper bound also but still)

   int sum=0;
   vector<int> ans;
   sort(v.begin(),v.end()); // Sorting so that I can use upper bound
   for(int i=0 ; i<n ; i++){
      auto it=upper_bound(v.begin(),v.end(),sum);
      if(it!=v.end()){
         ans.push_back(v[i]);
      }
      sum+=v[i];
   }

   for(auto &it:ans){
      cout<<it<<" ";
   }

   cout<<"\n";
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
