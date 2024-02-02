#include <bits/stdc++.h>
using namespace std;
vector<int> adj[10];
int visited[10];

void addedges(vector<int> adj[], int s, int d)
{
    adj[s].push_back(d);
    adj[d].push_back(s);
}
void bfs(int b, int n)
{
    queue<int> Q;
    Q.push(b);
    visited[b] = 1;
    while (!Q.empty())
    {
        int u = Q.front();
        cout << u << "\t";
        Q.pop();

        for (int i = 0; i < adj[u].size(); i++)
        {
            if (visited[adj[u][i]] == 0)
            {
                int v = adj[u][i];
                visited[v] = 1;
                Q.push(v);
            }
        }
    }
}
int main()
{
    int n, edges, a, b, i, j;

    // printf("\nEnter the nodes and edges:\n");
    scanf("%d %d", &n, &edges);

    for (i = 0; i < n; i++)
    {
        visited[i] = 0;
    }

    for (i = 0; i < edges; i++)
    {
        scanf("%d %d", &a, &b);
        addedges(adj, a, b);
    }
    cout << "Printing the graph using bfs:" << endl;
    bfs(2, 7);

    return 0;
}