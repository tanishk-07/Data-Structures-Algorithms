// Binary Search on answers Minimise the maximum difference or Gas stations problem

class Solution {
public:
    /**
     * @param stations: an integer array
     * @param k: an integer
     * @return: the smallest possible value of D
     */
    bool check(double mid , int k , vector<int> &stations){ // Check functions
        int count=0;
        for(int i=0 ;i<stations.size()-1 ; i++){
           count+=(int)((stations[i+1]-stations[i])/mid);
        }
        return (count<=k);
    }

    double minmaxGasDist(vector<int> &stations, int k) {
        double high=-1e9;
        for(int i=0 ; i<stations.size()-1; i++){
            high=max(high,(double)stations[i+1]-stations[i]);
        }
        
        double low=0;
        double ans=0;
        while(high-low>0.0000001){  // Binary search on real numbers 
            double mid=low+(high-low)/2;
            if(check(mid,k,stations)){
                ans=mid;
                high=mid;
            }else{
                low=mid;
            }
        }

        return ans;
    }
};
