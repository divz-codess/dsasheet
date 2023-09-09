class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        vector<int> ans;
        for(int i=0;i<nums1.size();i++){
            stack<int> s;
            for(int j=nums2.size()-1;j>=0;j--){
                if(nums1[i]==nums2[j]){
                    if(s.empty()) ans.push_back(-1);
                    else if(!s.empty() && s.top()>nums2[j]){
                        ans.push_back(s.top());
                    }
                    else if(!s.empty() && s.top()<=nums2[j]){
                        while(!s.empty() && s.top()<=nums2[j]){
                            s.pop();
                        }
                        if(s.empty()) ans.push_back(-1);
                        else ans.push_back(s.top());
                    }
                }
                s.push(nums2[j]);
            }
        }
        return ans;
    }
};