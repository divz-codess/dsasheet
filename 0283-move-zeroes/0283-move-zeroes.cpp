class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        vector<int> ans=nums;
        int c=0;
        nums.clear();
        for(int i=0;i<ans.size();i++){
            if(ans[i]!=0){
                nums.push_back(ans[i]);
            }
            else
                c++;
        }
        for(int i=0;i<c;i++){
            nums.push_back(0);
        }
    }
};