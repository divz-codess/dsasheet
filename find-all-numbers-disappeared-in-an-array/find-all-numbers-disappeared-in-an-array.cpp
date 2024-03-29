class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        map<int,int> mp;
        for(int i: nums){
            mp[i]++;
        }
        vector<int> ans;
        for(int i=1;i<=nums.size();i++){
            if(mp[i]==0) ans.push_back(i);
        }
        return ans;
    }
};