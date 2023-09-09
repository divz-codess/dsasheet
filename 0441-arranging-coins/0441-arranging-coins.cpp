class Solution {
public:
    int arrangeCoins(int n) {
        int num=n;
        int i=1;
        int ans=0;
        while(true){
            if(num<=0) break;
            num=num-i;
            if(num>=0) ans++;
            i++;
        }
        return ans;
    }
};