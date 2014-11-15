//
//  BFSAlgorithm.cpp
//  FordFulkersonAlgorithm
//
//  Created by Michal Moskala on 15/11/14.
//  Copyright (c) 2014 Michal Moskala. All rights reserved.
//

#include "BFSAlgorithm.h"
#include <string.h>
#include <queue>

using namespace std;

bool BFSAlgorithm::bfs(int residualGraph[VERTEX_COUNT][VERTEX_COUNT], int sourceIndex, int sinkIndex) {
	memset(this->visited, 0, sizeof(this->visited));
	
	queue<int> queue;
	queue.push(sourceIndex);
	this->visited[sourceIndex] = true;
	this->parent[sourceIndex] = -1;
	
	while (queue.empty() == false) {
		int firstElement = queue.front();
		queue.pop();
		
		for (int i = 0; i < VERTEX_COUNT; i++) {
			if (visited[i] == false && residualGraph[firstElement][i] > 0) {
				queue.push(i);
				this->parent[i] = firstElement;
				this->visited[i] = true;
			}
		}
	}
	
	return visited[sinkIndex] == true;
}