class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        map<int,int> m;
        for(int i: nums){
            m[i]++;
        }
        vector<pair<int,int>> pp;
        for(auto &i: m){
            pp.push_back({i.second,i.first});
        }
        sort(pp.rbegin(),pp.rend());
        for(auto &i: pp){
            cout<<i.second<<" ";
        }
        cout<<endl;
        vector<int> ans;
        for(auto i: pp){
            ans.push_back(i.second);
            k--;
            if(k==0) break;
        }
        return ans;
    }
};