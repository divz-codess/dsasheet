class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        /*
        ALGO:
        1. Take a variable ind to stor the index of dip or the point where we see that the next no. is smaller when travelling from back
        2. Traverse through the vector to find the dip point
        3. If we donot find any index then the array is in descending order already so reverse it as there is no permutation greater than it
        4. Find the number traversing from back which is greater than the number at ind and it will be the 1st no. to be found as we donot have any dip points as checked already.
        5. When found swap it and break;
        6. Now just reverse the array from nums.begin()+ind+1 to end.
        */
        int ind=-1;
        int n=nums.size();
        for(int i=n-2;i>=0;i--){
            if(nums[i]<nums[i+1]){
                ind=i;
                break;
            }
        }
        
        if(ind ==-1){
            reverse(nums.begin(),nums.end());
            return;
        }
        
        for(int i=n-1;i>=ind;i--){
            if(nums[i]>nums[ind]){
                swap(nums[i],nums[ind]);
                break;
            }
        }
        reverse(nums.begin()+ind+1,nums.end());
    }
};