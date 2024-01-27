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
    // 
    //    int dup=0;
    // for(int i=0;i<A.size();i++){
    //     if(A[i]!=i+1){
    //         mis=i+1;
    //         dup=A[i];
    //     }
    // }
    
    
    return A[x];
    }
};
