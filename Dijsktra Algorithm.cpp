#include <bits/stdc++.h>
using namespace std;
#define endl "\n"



void dijsktra(int source, vector<vector<pair<int,int>>> &graph, bool visited[]){
    int n=graph.size();
    vector<int> minmCost(n,INT_MAX);
    vector<int> sourceOfMin(n,-1);
    priority_queue<pair<int,int>>pq;

    minmCost[source]=0;
    sourceOfMin[source]=source;
    pq.push({0,source});

    while(!pq.empty()){
        int currentNode=pq.top().second;
        pq.pop();
        if(visited[currentNode]){
            continue;
        }
        visited[currentNode]=1;
        for(auto e:graph[currentNode]){
            int targetNode=e.first;
            int targetNodeCost=e.second;
            if(minmCost[currentNode]+targetNodeCost<minmCost[targetNode]){

                minmCost[targetNode]=minmCost[currentNode]+targetNodeCost;
                sourceOfMin[targetNode]=currentNode;
                pq.push({-1*minmCost[targetNode],targetNode});
            }
        }
    }
    for(int i=0; i<n; i++){
        cout << "node number: " << i << " minimum cost: " << minmCost[i]<<endl;
    }

}

int main()
{
   //dijsktra
   int n;
   cout << "please enter number of nodes of graph:";
   cin >> n;

   vector<vector<pair<int,int>>> graph(n);
   int m;
   cout << "\n" <<"please enter number of edges of graph:";

   cin >> m;
   int source,destination,cost;
   while(m--){
    cout << "\n" << "enter source, destiniation and cost: ";
    cin >> source >> destination >> cost;
    graph[source].push_back(make_pair(destination,cost));
    graph[destination].push_back(make_pair(source,cost));
   }
   bool visited [n]={false};
   dijsktra(0,graph, visited);




}
