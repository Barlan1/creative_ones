#include<bits/stdc++.h>
using namespace std;
class Graph{
	int V;
	list<int> *adj;
	void BFSUtil(int s,bool visited[] );
	public:
		Graph(int V);
		void addEdge(int src, int dest);
		void BFS( );
};
Graph::Graph(int V)
{
	this->V= V;
	adj= new list<int>[V];
}
void Graph::addEdge(int src,int dest)
{
	adj[src].push_back(dest);
}
void Graph::BFSUtil(int s,bool visited[])
{ 
	list<int> queue;
	visited[s]= true;
	queue.push_back(s);
	list<int>::iterator i;
	while(!queue.empty())
	{		
		s= queue.front();
		cout<<s <<" ";
		queue.pop_front();		
		for(i=adj[s].begin();i!=adj[s].end();++i)
		{
			if(!visited[*i])
			{
				visited[*i]=true;
				queue.push_back(*i);
			}
		}
	}
}
void Graph::BFS()
{
	bool *visited= new bool[V];
	for(int i=0;i<V;i++)
	 visited[i]=false;
	 
	for(int i=0;i<V;i++)
	{
		if(visited[i]==false)
		BFSUtil(i, visited);
	}
}
int main()
{
	Graph g(9);
	g.addEdge(0,1);
	g.addEdge(1,2);
	g.addEdge(1,3);
	g.addEdge(1,4);
	g.addEdge(2,0);
	g.addEdge(5,6);
	g.addEdge(7,8);
	g.BFS();
}
