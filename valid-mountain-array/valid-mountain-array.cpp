class Solution {
public:
    bool validMountainArray(vector<int>& arr) {
        int p=1;
        if(arr.size()<3) return false;
        while(p<arr.size()){
            if(arr[p] > arr[p-1]) p++;
            else break;
        }
        if(arr.size()==p || p==1) return false;
        while(p<arr.size()){
            if(arr[p]< arr[p-1]) p++;
            else break;
        }
        if(p==arr.size()) return true;
        else return false;
    }
};