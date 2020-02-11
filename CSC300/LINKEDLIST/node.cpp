#include "node.hpp"
#include <stdlib.h>
node::node(int payload)
{
    this->payload = payload; 
}

int node::getpayload()
{
    return this->payload;
}

node* node::getnextnode()
{
    return this->nextnode;
}

void node::setnextnode(node* n)
{
    this->nextnode = n;
}