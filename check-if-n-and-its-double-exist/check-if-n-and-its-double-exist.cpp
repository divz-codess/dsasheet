class Solution {
public:
    bool checkIfExist(vector<int>& arr) {
        for(int i=0;i<arr.size();i++){
            for(int j=0;j<arr.size();j++){
                if(j==i) continue;
                if(arr[i]==arr[j]*2) return true;
            }
        }
        return false;
    }
};