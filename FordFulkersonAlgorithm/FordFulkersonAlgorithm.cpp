//
//  FordFulkersonAlgorithm.cpp
//  FordFulkersonAlgorithm
//
//  Created by Michal Moskala on 15/11/14.
//  Copyright (c) 2014 Michal Moskala. All rights reserved.
//

#include "FordFulkersonAlgorithm.h"
#include <limits.h>
#include <algorithm>

FordFulkersonAlgorithm::FordFulkersonAlgorithm(int graph[VERTEX_COUNT][VERTEX_COUNT]) {
	for (int i = 0; i < VERTEX_COUNT; i++) {
		for (int j = 0; j < VERTEX_COUNT; j++) {
			this->residualGraph[i][j] = graph[i][j];
		}
	}
	
	this->bfsAlgorithm = new BFSAlgorithm();
}

int FordFulkersonAlgorithm::maximumFlowForVertices(int source, int sink) {
	int maxFLow = 0;
	
	int u;
	while (bfsAlgorithm->bfs(residualGraph, source, sink)) {
		int pathFlow = INT_MAX;
		
		for (int vertex = sink; vertex != source; vertex = bfsAlgorithm->parent[vertex]) {
			u = bfsAlgorithm->parent[vertex];
			pathFlow = std::min(pathFlow, residualGraph[u][vertex]);
		}
		
		for (int vertex = sink; vertex != source; vertex = bfsAlgorithm->parent[vertex]) {
			u = bfsAlgorithm->parent[vertex];
			residualGraph[u][vertex] -= pathFlow;
			residualGraph[vertex][u] += pathFlow;
		}
		
		maxFLow += pathFlow;		
	}
	
	return maxFLow;
}