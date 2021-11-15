#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution
{
	public:
	//Function to find the shortest distance of all the vertices
    //from the source vertex S.
    vector <int> dijkstra(int V, vector<vector<int>> adj[], int S)
    {
        // Code here
       
        //adj list is given
        priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>>pq;
        pq.push({0,S});
        vector<int>dist(V,INT_MAX);//0 indexed
        dist[S]=0;
        while(!pq.empty())
        {
            int d= pq.top().first;
            int curnode=pq.top().second;
            pq.pop();
            for(auto x:adj[curnode])
            {
                int d1=x[1];
                int nextnode=x[0];
                if( dist[nextnode] > dist[curnode] + d1){
				dist[nextnode]=dist[curnode] + d1;
				pq.push(make_pair(dist[nextnode], nextnode));
			}
            }
            
        }
       return dist; 
    }
};

