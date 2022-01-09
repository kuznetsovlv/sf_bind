#pragma once
#include <string>

class Node final
{
	private:
	std::string _name;

	public:
	Node(std::string&)noexcept;

	const std::string &name()const noexcept;
};
