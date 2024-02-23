class Solution {
public:
    bool check(int start, vector<vector<int>>& graph, vector<int>& color){
        queue<int> q;
        q.push(start);
        
        while(!q.empty()){
            int n=q.front();
            q.pop();
            
            for(int i: graph[n]){
                if(color[i]==-1){
                    color[i]=!color[n];
                    q.push(i);
                }
                else if(color[i]==color[n]){
                    return false;
                }
            }
        }
        return true;
    }
    bool isBipartite(vector<vector<int>>& graph) {
        int n=graph.size();
        
        vector<int> color(n,-1);
        
        for(int i=0;i<n;i++){
            if(check(i,graph,color)==false){
                return false;
            }
        }
        
        return true;
    }
};