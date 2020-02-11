#ifndef linkedlist_hpp
#define linkedlist_hpp
#include "node.hpp"

class linkedlist
{
private:
    node* head; 
    int count; 

public: 
    linkedlist();
    void addfront(int payload);
    void display();

};
#endif/*linkedlist_hpp */