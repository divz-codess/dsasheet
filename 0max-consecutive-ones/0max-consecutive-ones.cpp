class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int c=0, maxc=0;
        for(int i: nums){
            if(i==1) 
            {c++;
            maxc=max(maxc,c);}
            else if(i==0) c=0;
        }
        return maxc;
    }
};