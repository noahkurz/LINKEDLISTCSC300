#include "linkedlist.hpp"

int main()
{
    linkedlist* ll = new linkedlist();
    ll->addfront(1);
    ll->addfront(2);
    ll->display();
    delete ll;

}