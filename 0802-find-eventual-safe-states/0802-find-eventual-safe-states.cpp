class Solution {
public:
    vector<int> eventualSafeNodes(vector<vector<int>>& adj) {
        int V=adj.size();
        vector<int> indegree(V,0);
        vector<int> adj1[V];
        for(int i=0;i<V;i++){
            for(int it: adj[i]){
                adj1[it].push_back(i);
            }
        }
        for(int i=0;i<V;i++){
            for(int it: adj1[i]){
                indegree[it]++;
            }
        }
        queue<int> q;
        for(int i=0;i<V;i++){
            if(indegree[i]==0){
                q.push(i);
            }
        }
        vector<int> vec;
        while(!q.empty()){
            int node=q.front();
            q.pop();
            vec.push_back(node);
            
            for(int it: adj1[node]){
                indegree[it]--;
                if(indegree[it]==0){
                    q.push(it);
                }
            }
        }
        sort(vec.begin(),vec.end());
        return vec;
    }
};