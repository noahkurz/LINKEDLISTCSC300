#include "linkedlist.hpp"
//#include "node.cpp"
#include <iostream> 
#include <cstddef>

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

int linkedlist::getfront()
{
    return this->head->getpayload();
}

int linkedlist::removefront()
{
    node* nodetoreturn = this->head;
    this->head = head->getnextnode();
    int val = nodetoreturn->getpayload();
    delete nodetoreturn;
    this->count--;
    return val; 
}

void linkedlist :: addend(int payload)
{
    node* newNode = new node(payload);
    node* nn = this->head;
    for(int i =1; i<=this->count-1; i++)
    {
        nn = nn->getnextnode();

    }
    nn->setnextnode(newNode);
    this->count++;
} 

int linkedlist::getend()
{
   node* nn = this->head;
   for(int i =1; i<=this->count-1; i++)
   {
       nn = nn->getnextnode();
   }
   return nn->getpayload();
}

int linkedlist::removeend()
{
    node* nn = this->head;
    for(int i =1; i<=this->count-1; i++)
    {
        nn = nn->getnextnode();
    }
    int deleteMe = nn->getpayload();
    delete nn;
    this->count --;
    return deleteMe; 
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