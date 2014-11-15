//
//  BFSAlgorithm.h
//  FordFulkersonAlgorithm
//
//  Created by Michal Moskala on 15/11/14.
//  Copyright (c) 2014 Michal Moskala. All rights reserved.
//

#ifndef __FordFulkersonAlgorithm__BFSAlgorithm__
#define __FordFulkersonAlgorithm__BFSAlgorithm__

#include <stdio.h>
#include "Definitions.h"


class BFSAlgorithm {
private:
	bool visited[VERTEX_COUNT];
	int firstQueueElement;
	
public:
	int parent[VERTEX_COUNT];
	bool bfs(int residualGraph[VERTEX_COUNT][VERTEX_COUNT], int sourceIndex, int sinkIndex);
	bool isVertexConsequent(int graph[VERTEX_COUNT][VERTEX_COUNT], int firstVertex, int secondVertex);
};

#endif /* defined(__FordFulkersonAlgorithm__BFSAlgorithm__) */
