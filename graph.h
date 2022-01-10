#pragma once
#include <string>
#include <vector>
#include "node.h"
#include "graph_processing.h"

class Graph final
{
	private:
	std::vector<Node*> _nodes;
	std::vector<std::vector<unsigned>> _edges;

	public:
	~Graph()noexcept;

	void add(const std::string&);
	const std::string &name(size_t)const noexcept;

	friend std::vector<std::vector<unsigned>> getDistances(const Graph&);
	friend void printMatrixes(const Graph&);
};
