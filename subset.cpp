class Solution {
public:
    vector<vector<int>> subsets(vector<int>& nums) {
        int n=nums.size();
        int subsets=(1<<n);
        vector<vector<int>> ans;
        for(int mask=0 ; mask<subsets ; mask++){
            vector<int> v;
            for(int i=0 ; i<n ; i++){
               if((mask>>i)&1){
                   cout<<nums[i]<<" ";
                   v.push_back(nums[i]);
               }
            }
            cout<<"\n";
            ans.push_back(v);
        }

        return  ans;
    }
};
