class Solution {
public:
    int findMin(vector<int>& nums) {
        int start=0;
        int end=nums.size()-1;
        int n=nums.size();
        
        while(start<=end)
        {
            int mid=start+(end-start)/2;
            int prev=(mid-1+n)%n;
            int next=(mid+1)%n;
            if(nums[mid]<=nums[next] && nums[mid]<=nums[prev])
                return nums[mid];
            else if(nums[start]<=nums[mid]){
                if(nums[start]<=nums[end])
                    end=mid-1;
                else
                    start=mid+1;
            }

            else if(nums[mid]<=nums[end])
                end=mid-1;
        }
        
        return nums[0];
    }
};