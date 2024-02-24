class Solution {
public:
    bool canFinish(int N, vector<vector<int>>& prereq) {
        vector<int> indegree(N, 0);
        vector<int> adj[N];
        for(auto i: prereq){
            int a= i[0];
            int b= i[1];
            adj[a].push_back(b);
        }
        for(int i=0;i<N;i++){
            for(int it: adj[i]){
                indegree[it]++;
            }
        }
        queue<int> q;
        for(int i=0;i<N;i++){
            if(indegree[i]==0){
                q.push(i);
            }
        }
        vector<int> vec;
        while(!q.empty()){
            int node=q.front();
            q.pop();
            vec.push_back(node);
            for(int it: adj[node]){
                indegree[it]--;
                if(indegree[it]==0){
                    q.push(it);
                }
            }
        }
        if(vec.size()==N) return true;
        return false;
    }
};