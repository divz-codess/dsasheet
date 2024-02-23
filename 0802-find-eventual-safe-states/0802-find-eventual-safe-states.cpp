class Solution {
public:
    bool dfs(int node, vector<int> &vis, vector<int> &pathvis, vector<int> &check,vector<vector<int>>& graph){
        vis[node]=1;
        pathvis[node]=1;
        check[node]=0; // ye safe node nhi h till we reach end of this function
        for(int i: graph[node]){
            if(vis[i]==0){
                // agar cycle mil gyi to ye safe node nhi hoga
                if(dfs(i,vis,pathvis,check,graph)==true){
                    check[node]=0;
                    return true;
                }
            }
            else if(pathvis[i]==1) // vis bhi h and pathvis bhi h so cycle h 100% so not a safe node
            {
                check[node]=0;
                return true;
            }
        }
        check[node]=1;
        pathvis[node]=0;
        return false;
    }
    vector<int> eventualSafeNodes(vector<vector<int>>& graph) {
        int n=graph.size();
        vector<int> vis(n,0);
        vector<int> pathvis(n,0);
        vector<int> check(n,0);
        
        for(int i=0;i<n;i++){
            if(vis[i]==0){
                dfs(i, vis, pathvis, check, graph);
            }
        }
        vector<int> ans;
        for(int i=0;i<n;i++){
            if(check[i]==1){
                ans.push_back(i);
            }
        }
        return ans;
    }
};