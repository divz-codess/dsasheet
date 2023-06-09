class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        //if target is present in the array
        int l=0;
        int h=nums.size()-1;
        while(l<=h){
            int mid=(l+h)/2;
            if(nums[mid]==target)
                return mid;
            else if(nums[mid]<target)
                l=mid+1;
            else
                h=mid-1;
        }
        //if target is not present in the array
         l=0;
         h=nums.size()-1;
        while(l<=h){
            int mid=(l+h)/2;
            //mid+1 cannot be checked if it is not present so check if 
            if(nums[mid]<target && (mid+1 >= nums.size() || nums[mid+1]>target ))
                return mid+1;
            else if(nums[mid]<target)
                l=mid+1;
            else
                h=mid-1;
        }
        //if target element is the smallest element to be added
        return 0;
    }
};