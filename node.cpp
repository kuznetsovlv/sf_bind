#include <string>
#include "node.h"

Node::Node(std::string &name)noexcept:_name(name)
{
}

const std::string &Node::name()const noexcept
{
	return _name;
}
