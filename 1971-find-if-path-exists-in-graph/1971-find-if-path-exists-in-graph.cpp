class Solution {
public:
    bool foo(vector<vector<int>> &v,int s,int d,vector<int> &explored){
        if (s==d){
            //cout<<"-";
            return true;
        }
        if(explored[s]){
            return false;
        }
        
        explored[s] = 1;
        for (int i = 0;i<v[s].size();i++){
            if(foo(v,v[s][i],d,explored))
            {
                //cout<<"1";
                return true;
            }
        }
        return false;
    }
    bool validPath(int n, vector<vector<int>>& edges, int source, int destination) {
        vector<vector<int>> graph(n);
        for(int i=0;i<edges.size();i++){
            graph[edges[i][0]].push_back(edges[i][1]);
            graph[edges[i][1]].push_back(edges[i][0]);
        }
        vector<int> explored(n,0);
        return foo(graph,source,destination,explored);
    }
};