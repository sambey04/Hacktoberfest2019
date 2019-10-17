#include <bits/stdc++.h>

/*This is the BFS algorithm for measuring distances in graphs */

using namespace std;

const int MAXN = 3e5;

std::vector<int> graph[MAXN];

int dist[MAXN];

queue<int> toVisit;


int n, m;
void bfs(int origin) {
	memset(dist, -1, sizeof(dist));
	toVisit.push(origin);
	dist[origin] = 0;
	while (!toVisit.empty()) {
		int current = toVisit.front();
		toVisit.pop();

		for (int i = 0; i < graph[current].size(); ++i)
		{
			int next = graph[current][i];
			if (dist[next] == -1) { //Wasn't visited yet
				dist[next] = dist[current] + 1;
				toVisit.push(next);
			}
		}

	}
}

int main(void)
{	
	cout << "How many nodes are in the graph? ";
	cin >> n;
	cout << "How many edged are in the graph? ";
	cin >> m;

	//Reads all nodes in the format
	for (int i = 0; i < m; ++i)
	{
		cout << "Type 2 ints (nodes) for the edge #" << i+1 << ":";
		//U and V are nodes
		int u, v;
		cin >> u >> v;

		//Assuming non-oriented graph, add each node to other's list of edges
		graph[u].push_back(v);
		graph[v].push_back(u);
	}

	//
	int orig, dest;
	cout << "Type the origin and the destination nodes to calc distance: ";
	std::cin >> orig >> dest;
	bfs(orig);

	//Now we have a vector dist which is filled up with distances from orig to x (dist[x]), set x = dest to give the answer
	cout << "Distance from " << orig << " to " << dest << " is " << dist[dest] << endl;	

	return 0;
}