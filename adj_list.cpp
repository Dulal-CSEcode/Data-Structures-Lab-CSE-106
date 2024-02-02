#include <bits/stdc++.h>
#include <vector>
using namespace std;
void addedges(vector<int> v[], int a, int b)
{
    v[a].push_back(b);
    v[b].push_back(a);
}
void print(vector<int> v[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << "Vertex "<<i
             << ":";
        for (int j = 0; j < v[i].size(); j++)
        {
           cout<<"->" << v[i][j] ;
        }
        cout << "\n";
    }
}
/*
5
7
0 1
0 2
0 3
1 3
1 4
3 2
3 4

*/
int main()
{
    int nodes, edges, a, b;
    printf("\nEnter the nodes ,edges:\n");
    scanf("%d %d", &nodes, &edges);

    vector<int> v[nodes];
    for (int i = 0; i < edges; i++)
    {
        scanf("%d %d", &a, &b);
        addedges(v, a, b);
    }
    print(v, nodes);
    printf("\n");

    return 0;
}