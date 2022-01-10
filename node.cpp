#include <string>
#include "node.h"

Node::Node(const std::string &name)noexcept:_name(name)
{
}

const std::string &Node::name()const noexcept
{
	return _name;
}
