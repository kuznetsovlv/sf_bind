#pragma once
#include <string>
#include <vector>
#include "node.h"

class Graph final
{
	private:
	std::vector<Node*> _nodes;
	std::vector<std::vector<unsigned>> _edges;

	public:
	~Graph()noexcept;

	void add(std::string&);
};
