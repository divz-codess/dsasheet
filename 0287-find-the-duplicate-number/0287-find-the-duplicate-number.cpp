class Solution {
public:
    int findDuplicate(vector<int>& A) {
    int i=0;
    while(i<A.size()){
        if(A[i]!=A[A[i]-1]){
            swap(A[i],A[A[i]-1]);
        }
        else{
            i++;
        }
    }
    int dup, mis;
    for(int i=0;i<A.size();i++){
        if(A[i]!=i+1){
            mis=i+1;
            dup=A[i];
        }
    }
    vector<int> ans;
    ans.push_back(dup);
    ans.push_back(mis);
    
    return dup;
    }
};
