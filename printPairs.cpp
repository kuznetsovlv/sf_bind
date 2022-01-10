#include <iostream>
#include <vector>
#include <cstddef>
#include "printPairs.h"
#include "graph.h"
#include "graph_processing.h"

void printPairs(unsigned maxDistance, const Graph &g)
{
	const std::vector<std::vector<unsigned>> distances = getDistances(g);

	for(size_t i = 0; i < distances.size(); ++i)
	{
		for(size_t j = 0; j < i; ++j)
		{
			if(distances[i][j] <= maxDistance)
			{
				std::cout << g.name(i) << " <--> " << g.name(j) << ": " << distances[i][j] << (distances[i][j] > 1 ? " bounds" : " bound") << std::endl;
			}
		}
	}
}
