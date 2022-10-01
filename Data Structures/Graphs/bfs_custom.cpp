#include<bits/stdc++.h>
using namespace std;

vector<int> bfsGraph(int total_nodes, vector<int> adj[], int start_node, bool isZeroBased)
{
	int vis[total_nodes + 1] = {0};
	queue<int> q;
	if(isZeroBased == true)
	{
		vis[start_node] = 1;
		q.push(start_node);
	}
	else{
		vis[0] = 1;
		vis[start_node] = 1;
		q.push(start_node);	
	}


	vector<int> bfs;

	while(!q.empty())
	{
		int node = q.front();
		q.pop();
		bfs.push_back(node);

		for(auto it: adj[node])
		{
			if(!vis[it])
			{
				vis[it] = 1;
				q.push(it);
			}
		}

	}
	return bfs;

}

void addEdge(vector<int> adj[], int u, int v)
{
	adj[u].push_back(v);
	adj[v].push_back(u);
}

int main()
{
	cout<<"Enter number of nodes: ";
	int total_nodes;
	cin>>total_nodes;

	cout<<"Enter number of edges: ";
	int total_edges;
	cin>>total_edges;

	vector<int> adj[total_nodes + 1];

	cout<<"Enter order of vertices: ";

	bool isZeroBased = false;

	for(int i=0; i < total_edges; i++)
	{
		int u,v;
		cin>>u>>v;
		if(u == 0 || v == 0) isZeroBased = true;
		addEdge(adj, u, v);
	}

	int start_node;
	cout<<"Which node do you want to traverse from: ";
	cin>>start_node;

	vector<int> ans = bfsGraph(total_nodes, adj, start_node, isZeroBased);

	cout<<"BFS of the graph is: "<<endl;
	int sizeOfBFS = ans.size();

	for(int i = 0; i < sizeOfBFS; i++)
	{
		cout<<ans[i]<<" ";
	}

}