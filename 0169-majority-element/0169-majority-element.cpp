class Solution {
public:
    int majorityElement(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int max=0;
        int c=1;
        int number=nums[0];
        for(int i=0;i<nums.size()-1;i++){

            if(nums[i]==nums[i+1]){
                c++;
            }
            else{
                c=1;
            }
            if(c>max){
                max=c;
                number=nums[i];
            }
        }

        return number;
    }
};