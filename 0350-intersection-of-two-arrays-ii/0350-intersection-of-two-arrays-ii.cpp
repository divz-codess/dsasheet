class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        vector<pair<int,int>> pp;
        vector<int> ans;
        for(int &i: nums1){
            pp.push_back({i,0});
        }
        
        for(int &j: nums2){
            bool flag=true;
            for(auto &i: pp)
            {
                if(i.first==j && i.second==0 && flag){
                    ans.push_back(j);
                    i.second=1;
                    flag=!flag;
                }
            }
        }
        return ans;
    }
};