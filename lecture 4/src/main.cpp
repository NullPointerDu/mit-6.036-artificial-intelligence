#include "tree.hpp"

int main()
{
    Node *n112 = new Node("n11 2", std::list<Node*>{});
    Node *n111 = new Node("n11 1", std::list<Node*>{});
    Node *n13 = new Node("n13", std::list<Node*>{});
    Node *n12 = new Node("n12", std::list<Node*>{});
    Node *n11 = new Node("n11", std::list<Node*>{n111, n112});
    Node *root = new Node("root", std::list<Node*>{n11, n12, n13});
    return 0;
}