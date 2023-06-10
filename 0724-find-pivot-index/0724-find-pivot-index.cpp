class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int n=nums.size();
        if(n==1) return 0;
        vector<int> l(n);
        l[0]=nums[0];
        vector<int> r(n);
        r[n-1]=nums[n-1];
        for(int i=1;i<n;i++){
            l[i]=nums[i]+l[i-1];
            r[n-i-1]=nums[n-i-1]+r[n-i];
        }
        for(int i=0;i<n;i++){
            if(l[i]==r[i])
                return i;
        }
        return -1;
    }
};