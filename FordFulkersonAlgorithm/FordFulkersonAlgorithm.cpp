//
//  FordFulkersonAlgorithm.cpp
//  FordFulkersonAlgorithm
//
//  Created by Michal Moskala on 15/11/14.
//  Copyright (c) 2014 Michal Moskala. All rights reserved.
//

#include "FordFulkersonAlgorithm.h"

FordFulkersonAlgorithm::FordFulkersonAlgorithm(int graph[VERTEX_COUNT][VERTEX_COUNT]) {
	for (int i = 0; i < VERTEX_COUNT; i++) {
		for (int j = 0; j < VERTEX_COUNT; j++) {
			this->residualGraph[i][j] = graph[i][j];
		}
	}
}

int FordFulkersonAlgorithm::maximumFlowForVertices(int source, int sink) {
	int maxFLow = 0;
	
	return maxFLow;
}