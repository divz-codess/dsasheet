class Solution {
public:
    void duplicateZeros(vector<int>& arr) {
        int l1=arr.size();
        for(int i=0;i<arr.size()-1;i++){
            if(arr[i]==0){
                arr.erase(arr.begin()+l1-1);
                arr.insert(arr.begin()+i+1,0);
                
                i++;
            }
        }
    }
};