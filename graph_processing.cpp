#include <iostream>
#include <cstddef>
#include <vector>
#include <limits>
#include "graph.h"
#include "node.h"
#include "graph_processing.h"

void printMatrix(const std::vector<Node*>&, const std::vector<std::vector<unsigned>>&);

std::vector<std::vector<unsigned>> getDistances(const Graph &g)
{
	std::vector<std::vector<unsigned>> result;

	for(size_t i = 0; i < g._edges.size(); ++i)
	{
		std::vector<unsigned> line;
		for(size_t j = 0; j < g._edges[i].size(); ++j)
		{
			if(g._edges[i][j])
			{
				line.push_back(g._edges[i][j]);
			}
			else
			{
				line.push_back(i == j ? 0 : std::numeric_limits<unsigned>::max());
			}
		}
		result.push_back(line);
	}

	for(size_t i = 0; i < result.size(); ++i)
	{
		for(size_t j = 0; j < result[i].size(); ++j)
		{
			if(i == j)
			{
				continue;
			}
			for(size_t k = 0; k < result.size(); ++k)
			{
				if(i == k || j == k)
				{
					continue;
				}
				// To avoid overflow we expand value sizes by casting it to unsigned long long
				unsigned long long distance = static_cast<unsigned long long> (result[j][i]) + static_cast<unsigned long long> (result[i][k]);
				if(static_cast<unsigned long long> (result[j][k]) > distance)
				{
					result[j][k] = distance;
				}
			}
		}
	}

	return result;
}

void printMatrixes(const Graph &g)
{
	printMatrix(g._nodes, g._edges);
	std::cout << std::endl;
	printMatrix(g._nodes, getDistances(g));
}

void printMatrix(const std::vector<Node*> &nodes, const std::vector<std::vector<unsigned>> &matrix)
{
	for(Node *node: nodes)
	{
		std::cout << '\t' << node->name();
	}
	std::cout << std::endl;

	for(size_t i = 0; i< matrix.size(); ++i)
	{
		std::cout << nodes[i]->name();

		for(unsigned value: matrix[i])
		{
			std::cout << '\t';
			if(value == std::numeric_limits<unsigned>::max())
			{
				std::cout << "-";
			}
			else
			{
				std::cout << value;
			}
		}

		std::cout << std::endl;
	}
}
