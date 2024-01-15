class Solution {
public:
    bool finddigits(int n){
        int d=0;
        if(n==0) return false;
        while(n!=0){
            d++;
            n=n/10;
        }
        if(d%2==0)
        return true;
        else return false;
    }
    int findNumbers(vector<int>& nums) {
        int ans=0;
        for(int i: nums){
            if(finddigits(i)){
                ans++;
            }
        }
        return ans;
    }
};