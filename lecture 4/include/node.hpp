#pragma once
#include <string>
#include <list>
class Node
{
    public:
    std::string name;
    std::list<Node*> children;
    Node(std::string name, std::list<Node*> children);
};