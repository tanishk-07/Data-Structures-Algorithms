// arr=[a1,a2,a3.......]

vector<vector<int>> ans;  // To store all the subarrays i.e. ( n*(n+1) ) / 2 

for(int i=0 ; i<arr.size() ; i++){
  vector<int> temp;
  for(int j=i ; j<arr.size() ; j++){
  temp.push_back(arr[j]);
  ans.push_back(temp);
  }
}

for(int i=0 ; i<ans.size() ; i++){
   for(auto &it : ans[i]){
      cout<<it<<" ";
   }
   cout<<"\n";
}
