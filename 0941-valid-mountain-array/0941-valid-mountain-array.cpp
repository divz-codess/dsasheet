class Solution {
public:
    bool validMountainArray(vector<int>& arr) {
        int n=arr.size();
        int pivot;
        int max=0;
        for(int i=0;i<n;i++){
            if(max<=arr[i]){
                max=arr[i];
                pivot=i;
            }
        }
        cout<<pivot<<endl;
        if(pivot==0 || pivot ==n-1){
            return false;
        }
        for(int i=0;i<pivot;i++){
            if(arr[i]>=arr[i+1]){
                return false;
            }
        }
        for(int i=pivot;i<n-1;i++){
            if(arr[i]<=arr[i+1]){
                return false;
            }
        }
        return true;
    }
};