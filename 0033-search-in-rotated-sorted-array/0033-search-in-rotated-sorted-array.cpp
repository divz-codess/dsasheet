class Solution {
public:
    int bs(vector<int>& nums, int start, int end, int target){
        int l=start, h=end;
        while(l<=h){
            int mid=l+(h-l)/2;
            if(nums[mid]==target)
                return mid;
            else if(nums[mid]<target)
                l=mid+1;
            else
                h=mid-1;
        }
        return -1;
    }
    int search(vector<int>& nums, int target) {
        int n=nums.size();
        int l=0,h=n-1;
        int index=-1;
        while(l<=h){
            int mid=l+(h-l)/2;
            int p=(mid-1+n)%n;
            int ne=(mid+1)%n;
            if(nums[mid]<=nums[p]&&nums[mid]<=nums[ne])
            {index=mid;
            break;}
            else if(nums[l]<=nums[mid]){
                if(nums[l]<=nums[h]){
                    h=mid-1;
                }
                else
                    l=mid+1;
            }
            else if(nums[mid]<=nums[h])
                h=mid-1;
        }
        int n1=bs(nums, 0,index-1,target);
        int n2=bs(nums,index,n-1,target);
        return max(n1,n2);
    }
};