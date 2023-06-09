// The API isBadVersion is defined for you.
// bool isBadVersion(int version);

class Solution {
public:
    int firstBadVersion(int n) {
        int l=0,h=n,mid;
        while(l<=h){
            mid=l+(h-l)/2;
            if(isBadVersion(mid)==1 && ( isBadVersion(mid-1)==0))
                return mid;
            else if(isBadVersion(mid)==0)
                l=mid+1;
            else
                h=mid-1;
        }
        return 0;
    }
};