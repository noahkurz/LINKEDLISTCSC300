#ifndef node_hpp
#define node_hpp

class node 
{
 private:
    int payload;
    node* nextnode;

public: 
    node(int payload);
    int getpayload();
    node* getnextnode();
    void setnextnode(node* n);

};
#endif /* Node_hpp*/