class Solution {
public:
    vector<int> replaceElements(vector<int>& arr) {
        int m=-1,cur;
        for(int i=arr.size()-1;i>=0;i--){
            cur=arr[i];
            arr[i]=m;
            m=max(m,cur);
        }
        return arr;
    }
};