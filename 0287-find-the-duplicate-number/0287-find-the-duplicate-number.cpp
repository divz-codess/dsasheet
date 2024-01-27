class Solution {
public:
    int findDuplicate(vector<int>& A) {
    int i=0,x;
    while(i<A.size()){
        if(A[i]!=A[A[i]-1]){
            swap(A[i],A[A[i]-1]);
        }
        else{
            x=i;
            i++;
            
        }
    }
    // x stores the last index where the value of A[i] != A[A[i]-1] 
    return A[x];
    }
};
