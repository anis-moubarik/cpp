#include <iostream>
#include <string>
#include "SList.h"

void SList::push_front(std::string str)
{
	Node* newn = new Node();
	newn->setString(str);
	newn->setNext(head);
	
	head = newn;

}

std::string SList::pop_front()
{
	Node* newn = head;
	head = newn->getNext();
	return newn->getData();
}