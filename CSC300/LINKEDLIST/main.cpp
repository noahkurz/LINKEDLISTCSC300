#include "linkedlist.hpp"
#include <iostream>

int main()
{
    linkedlist* ll = new linkedlist();
    ll->addfront(1);
    ll->addfront(2);
    ll->addend(3);
    ll->display();
   // ll->getend();
    ll->removeend();
    //ll->display();
   // std::cout<<ll->removeend()<<"\n";
    //std::cout<<ll->removefront()<<"\n";
    ll->display();
    delete ll;

}