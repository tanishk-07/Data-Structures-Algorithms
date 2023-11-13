    int maxIceCream(vector<int>& costs, int coins) {
        int maxx=INT_MIN;
        for(int i=0 ; i<costs.size() ; i++){
            maxx=max(maxx,costs[i]);
        }

        vector<int> hash(maxx+1);
        for(int i=0 ; i<costs.size() ; i++){
            hash[costs[i]]++;
        }
        
        vector<int> sortedArr;
        for(int i=0 ; i<hash.size() ; i++){
            int temp=hash[i];
            while(temp--){
                sortedArr.push_back(i);
            }
        }
