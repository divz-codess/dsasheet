class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int,int> ump;
        int n=0;
        for(int i:nums){
            ump[i]++;
        }
        vector<pair<int,int>> freq;
        
        for(auto& i: ump){
            freq.push_back({i.second,i.first});
        }
        sort(freq.rbegin(),freq.rend());
        
        vector<int> ans;
        for(int i=0;i<k;i++){
            ans.push_back(freq[i].second);
        }
        return ans;
    }
};