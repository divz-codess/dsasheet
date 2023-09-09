class Solution {
public:
    int arrangeCoins(int n) {
        long long l=0,r=n;
        if(n==1) return 1;
        while(l<=r){
            long long mid=(r-l)/2+l;
            if((mid*(mid+1))/2>n){
                r=mid-1;
            }
            else if((mid*(mid+1))/2<=n){
                l=mid+1;
            }
        }
        return l-1;
    }
};