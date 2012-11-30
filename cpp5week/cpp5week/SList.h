#ifndef SLIST_H
#define SLIST_H

class Node{
private:
	std::string data;
	Node* next;

public:
	Node() {};
	void setString(std::string str) { data = str; };
	void setNext(Node *nnext) { next = nnext; };
	std::string getData() {return data; };
	Node* getNext() { return next; };
};

class SList{
public:
	SList() { head = NULL; };
	void push_front(std::string);
	std::string pop_front();
	Node& front();

private:
	Node *head;
};
#endif // !SLIST_H

