class Solution {
public:
    vector<int> replaceElements(vector<int>& arr) {
        int i;
        for(i=0;i<arr.size()-1;i++){
            int m=arr[i+1];
            for(int j=i+1;j<arr.size();j++){
                if(arr[j]>m){
                    m=arr[j];
                }
            }
            arr[i]=m;
        }
        arr[i]=-1;
        return arr;
    }
};