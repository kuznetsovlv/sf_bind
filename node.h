#pragma once
#include <string>

class Graph;

class Node final
{
	private:
	std::string _name;

	Node(std::string&)noexcept;

	public:
	const std::string &name()const noexcept;

	friend class Graph;
};
