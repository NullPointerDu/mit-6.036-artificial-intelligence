#include "node.hpp"
#include <iostream>
Node::Node(std::string name, std::list<Node*> children)
{
    this->name = name;
    this->children = children;
}

