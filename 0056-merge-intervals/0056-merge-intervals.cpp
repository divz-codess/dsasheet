class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        vector<vector<int>> result;
        
        if(intervals.size()<=1) return intervals; // base case
        
        sort(intervals.begin(),intervals.end());
        
        result.push_back(intervals[0]); // pushing the first interval
        
        int j=0;
        
        for(int i=1;i<intervals.size();i++){
            if(result[j][1]>=intervals[i][0]) //if we find overlapping subintervals
            {
                result[j][1]=max(result[j][1],intervals[i][1]);  // finding the maximum limit i.e [1]
            }
            else{
                j++;   // increase j value as we found correct non overlapping intervals till it
                result.push_back(intervals[i]);  // push back the non overlapping subinterval
            }
        }
        return result;
    }
};