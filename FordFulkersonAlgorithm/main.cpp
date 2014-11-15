//
//  main.cpp
//  FordFulkersonAlgorithm
//
//  Created by Michal Moskala on 27/10/14.
//  Copyright (c) 2014 Michal Moskala. All rights reserved.
//

#include <iostream>
#include "FordFulkersonAlgorithm.h"
#include "Definitions.h"

using namespace std;

int main(int argc, const char * argv[]) {
	int graph[VERTEX_COUNT][VERTEX_COUNT] = { {0, 16, 13, 0, 0, 0},
										{0, 0, 10, 12, 0, 0},
										{0, 4, 0, 0, 14, 0},
										{0, 0, 9, 0, 0, 20},
										{0, 0, 0, 7, 0, 4},
										{0, 0, 0, 0, 0, 0}};

	FordFulkersonAlgorithm *alhorithm = new FordFulkersonAlgorithm(graph);
	cout << "test: " << alhorithm->maximumFlowForVertices(0, 1) << endl;
	
	return 0;
}
