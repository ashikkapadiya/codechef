#include <iostream>
#include <stdio.h>
#include <limits.h>
#define v 9

using namespace std;

int mindis(int dist[], bool sptset[]){
	int min=INT_MAX,min_index;
	for(V=0;V<v;V++){
		if(sptset[V]==false && dist[V]<min){
			min=dist[V], min_index=V;
		}
	}
	return min_index;
}

void dijkstra(int graph[v][v], int src){
	int dist[v];
	bool sptset[v];
	for(i=0;i<v;i++){
		dist[i]=INT_MAX;
		sptset[i]=false;
	}
	dist[0]=0;
	for(int cnt=0;cnt<v-1;cnt++){
		int u=mindis(dist,sptset);
		sptset[u]=true;
		for(int V=0;V<v;v++){
			if(!sptset[V]&&graph[u][V]&&dist[u]!=INT_MAX&&dist[u]+graph[u][V]<dist[V]){
				dist[v]=dist[u]+graph[u][V];
			}
		}
	}
}

int main() {
	// your code goes here
	int graph[V][V] = {{0, 4, 0, 0, 0, 0, 0, 8, 0},
                      {4, 0, 8, 0, 0, 0, 0, 11, 0},
                      {0, 8, 0, 7, 0, 4, 0, 0, 2},
                      {0, 0, 7, 0, 9, 14, 0, 0, 0},
                      {0, 0, 0, 9, 0, 10, 0, 0, 0},
                      {0, 0, 4, 14, 10, 0, 2, 0, 0},
                      {0, 0, 0, 0, 0, 2, 0, 1, 6},
                      {8, 11, 0, 0, 0, 0, 1, 0, 7},
                      {0, 0, 2, 0, 0, 0, 6, 7, 0}
                     };
  
    dijkstra(graph, 0);
	return 0;
}
