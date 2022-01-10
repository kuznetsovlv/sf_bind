#include <string>
#include <vector>
#include "graph.h"
#include "node.h"
#include "randomEdge.h"

Graph::~Graph()noexcept
{
	for(Node *node: _nodes)
	{
		delete node;
	}
}

void Graph::add(const std::string &name)
{
	_nodes.push_back(new Node(name));

	std::vector<unsigned> newEdges;

	for(auto &line: _edges)
	{
		unsigned edge = randomEdge();
		newEdges.push_back(edge);
		line.push_back(edge);
	}

	newEdges.push_back(0);
	_edges.push_back(newEdges);
}
