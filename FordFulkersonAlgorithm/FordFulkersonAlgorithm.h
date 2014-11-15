//
//  FordFulkersonAlgorithm.h
//  FordFulkersonAlgorithm
//
//  Created by Michal Moskala on 15/11/14.
//  Copyright (c) 2014 Michal Moskala. All rights reserved.
//

#ifndef __FordFulkersonAlgorithm__FordFulkersonAlgorithm__
#define __FordFulkersonAlgorithm__FordFulkersonAlgorithm__

#include <stdio.h>
#include "Definitions.h"
#include "BFSAlgorithm.h"

class FordFulkersonAlgorithm {
private:
	int residualGraph[VERTEX_COUNT][VERTEX_COUNT];
	BFSAlgorithm *bfsAlgorithm;
	
public:
	FordFulkersonAlgorithm(int graph[VERTEX_COUNT][VERTEX_COUNT]);
	int maximumFlowForVertices(int source, int sink);
};


#endif /* defined(__FordFulkersonAlgorithm__FordFulkersonAlgorithm__) */
