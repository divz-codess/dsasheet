class Solution {
public:
    int heightChecker(vector<int>& heights) {
        vector<int> sort_height=heights;
        int k=0;
        sort(sort_height.begin(),sort_height.end());
        for(int i=0;i<heights.size();i++){
            if(heights[i]!=sort_height[i]) k++;
        }
        return k;
    }
};