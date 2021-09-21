 /*graph creation using adjacency list for a undirected graph*/
#include<bits/stdc++.h>
using namespace std;
typedef long long int lli;
addedge(vector<int>a[],int u,int v)
{
 a[u].push_back(v);
 a[v].push_back(u);	
}
printgraph(vector<int>a[],int noofvertex )
{
	for(int i=0;i<noofvertex;i++)
	{
		for(int j=0;j<a[i].size();j++)
		cout<<a[i][j]<<" ";
		cout<<endl;
	}
}
int main()
{
  int noofvertex=4;
  vector<int> a[noofvertex];
  addedge(a,0,1);
  addedge(a,1,2);
  addedge(a,2,3);
  addedge(a,1,3);
  printgraph(a,noofvertex);
    return 0;
}
