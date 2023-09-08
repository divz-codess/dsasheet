class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) 
    {
        double ans;
        vector<int> a;
        int i=0,j=0;
        while(i<nums1.size() && j<nums2.size()){
            if(nums1[i]<=nums2[j]){
                a.push_back(nums1[i++]);
            }
            else{
                a.push_back(nums2[j++]);
            }
        }
        while(i<nums1.size()){
            a.push_back(nums1[i++]);
        }
        while(j<nums2.size()){
            a.push_back(nums2[j++]);
        }
        for(int i: a){
            cout<<i<<" ";
        }
        cout<<endl;
        
        int m=(a.size()-1)/2;
        
        if(a.size()%2==0){
            double n1=a[m]+a[m+1];
            ans= n1/2;
            cout<<ans<<endl;
            cout<<m;
        }
        else ans= a[m];
        
        return ans;
        
    }
};