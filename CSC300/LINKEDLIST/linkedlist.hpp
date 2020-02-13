#ifndef linkedlist_hpp
#define linkedlist_hp
#include "node.hpp"

class linkedlist
{
private:
    node* head; 
    int count; 

public: 
    linkedlist();
    void addfront(int payload);
    int getfront();
    int removefront();
    void addend(int payload);
    int getend();
    int removeend();
    void display();

};
#endif/*linkedlist_hpp */