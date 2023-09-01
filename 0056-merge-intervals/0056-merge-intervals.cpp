class Solution {
public:
    vector<vector<int>> merging(vector<vector<int>>& intervals){
        vector<vector<int>> ans;
        int siz=intervals.size();
        int i;
        for( i=0;i<intervals.size()-1;i++){
            if((intervals[i+1][0]>=intervals[i][0] && intervals[i+1][0]<=intervals[i][1]) || (intervals[i][0]>=intervals[i+1][0] && intervals[i][0]<=intervals[i+1][1])){
                vector<int> a;
                a.push_back(min(intervals[i][0],intervals[i+1][0]));
                a.push_back(max(intervals[i][1],intervals[i+1][1]));
                ans.push_back(a);
                i++;
                siz--;
            }
            else 
                ans.push_back(intervals[i]);
        }
        
        if(siz!=ans.size()) 
            ans.push_back(intervals[i]);
        return ans;
    }
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        sort(intervals.begin(),intervals.end());
        vector<vector<int>> ans1=merging(intervals);
        vector<vector<int>> ans2;
        while(true){
            ans1=merging(ans1);
            ans2=merging(ans1);
            if(ans1==ans2) break;
        }
        return ans1;
    }
};