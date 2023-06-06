#include <bits/stdc++.h>
using namespace std;
int DFS_Recursive(int i, vector<int> Adj[], vector<int> &status, int c)
{
    status[i]=1;
    cout<<i;
    c++;
    for(int j=0;j<Adj[i].size();j++)
    {
        int x=Adj[i][j];
        if(status[x]==0)
            c=DFS_Recursive(x,Adj,status,c);
    }
    return c;
} 

void DFS(vector<int> Adj[],int N)
{
    int m=0;
    vector<int> status(N,0);
    vector<int> conncomp;
    
    for (int i = 0; i < N; i++)
    {
        if (status[i] == 0)
        {
            int c=DFS_Recursive(i,Adj,status,0);
            m++;
            conncomp.push_back(c);
        }
    }
    
}


int main()
{
    int v, e, a, b;
    cout << "\nEnter number of Vertices : ";
    cin >> v;
    cout << "\nEnter number of Edges : ";
    cin >> e;
    vector<int> adjlist[v];
    for (int i = 0; i < e; i++)
    {
        cout << "\nEnter endpoints of edge " << i + 1 << " : ";
        cin >> a >> b;
        adjlist[a].push_back(b);
        adjlist[b].push_back(a);
    }

    // printing
    for (int i = 0; i < v; i++)
    {
        cout << i << " : ";
        for (int j = 0; j < adjlist[i].size(); j++)
        {
            cout << adjlist[i][j] << " ";
        }
        cout << endl;
    }

    DFS(adjlist,v);

    return 0;
}