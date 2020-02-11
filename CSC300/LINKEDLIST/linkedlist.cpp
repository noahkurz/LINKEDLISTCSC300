#include "linkedlist.hpp"
#include <iostream> 

linkedlist::linkedlist()
{
    this ->count = 0;

}

void linkedlist::addfront(int payload)
{
    node* n = new node(payload);

    if (!this-> head)
    {
        this->head = n;
    }
    else
    {
       n->setnextnode(this->head);
       this->head = n;
            
    
    }
    this->count++;
    
}

void linkedlist::display()
{
    node* currnode = this->head;
    for(int i = 0; i < this->count; i++)
    {
        std::cout << currnode->getpayload() << "\n";
        currnode = currnode -> getnextnode();
    }
}