class Solution {
public:
    vector<int> nsr(vector<int> v){
        stack<pair<int,int>> s;
        vector<int> right;
        int pseudoindex=v.size();
        
        for(int i=v.size()-1;i>=0;i--){
            if(s.empty()) right.push_back(pseudoindex);
            else if(!s.empty() && s.top().first<v[i]){
                right.push_back(s.top().second);
            }
            else if(!s.empty() && s.top().first>=v[i]){
                while(!s.empty() && s.top().first>=v[i]){
                    s.pop();
                }
                if(s.size()==0) right.push_back(pseudoindex);
                else right.push_back(s.top().second);
            }
            s.push({v[i],i});
        }
        reverse(right.begin(),right.end());
        return right;
    }
    
    vector<int> nsl(vector<int> v){
        
        stack<pair<int,int>> s;
        vector<int> left;
        int pseudoindex=-1;
        
        for(int i=0;i<v.size();i++){
            if(s.size()==0) left.push_back(pseudoindex);
            else if(!s.empty() && s.top().first<v[i]){
                left.push_back(s.top().second);
            }
            else if(!s.empty() && s.top().first>=v[i]){
                while(!s.empty() && s.top().first>=v[i]){
                    s.pop();
                }
                if(s.empty()) left.push_back(pseudoindex);
                else left.push_back(s.top().second);
            }
            s.push({v[i],i});
        }
        
        return left;
    }
    
    int largestRectangleArea(vector<int>& heights) {
        vector<int> right=nsr(heights);
        vector<int> left=nsl(heights);
        vector<int> area(heights.size());
        int maxi=INT_MIN;
        for(int i=0;i<heights.size();i++){
            area[i]=(right[i]-left[i]-1) * heights[i];
            maxi=max(maxi,area[i]);
        }
        return maxi;
    }
};