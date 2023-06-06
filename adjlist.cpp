#include <bits/stdc++.h>
using namespace std;
int main()
{
    int v, e,a,b;
    cout << "\nEnter number of Vertices : ";
    cin >> v;
    cout << "\nEnter number of Edges : ";
    cin >> e;
    vector<int> adjlist[v];
    for(int i=0;i<e;i++)
    {
        cout<<"\nEnter endpoints of edge "<<i+1<<" : ";
        cin>>a>>b;
        adjlist[a].push_back(b);
        adjlist[b].push_back(a);
    }

    //printing
    for(int i=0;i<v;i++)
    {
        cout<<i<<" : ";
        for(int j=0;j<adjlist[i].size();j++)
        {
            cout<<adjlist[i][j]<<" ";
        }
        cout<<endl;
    }

    //bfs
    queue<int> q;
    vector<int> status(v,0);
    q.push(0);
    status[0]=1;

    while(!q.empty())
    {
        int x;
        x=q.front();
        for(int i=0;i<adjlist[x].size();i++)
        {
            if(status[adjlist[x][i]]==0)
            {
                status[adjlist[x][i]]=status[x]+1;
                q.push(adjlist[x][i]);
            }
        }
        q.pop();
        cout<<x<<" ";
    }

    for(auto i:status)
    {
        cout<<i<<" ";
    }

    return 0;
}