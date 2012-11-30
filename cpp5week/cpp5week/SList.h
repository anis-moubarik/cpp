#ifndef SLIST_H
#define SLIST_H
class SList{
	class Node{
	private:
		std::string data;
		Node* next;
		friend class SList;
		friend class Iterator;
	public:
		Node() {};
		void setString(std::string str) { data = str; };
		void setNext(Node *nnext) { next = nnext; };
		std::string getData() {return data; };
		Node* getNext() { return next; };
	};
public:
	class iterator{
	private:
		Node* ptr;
	public:
		iterator(Node& n) : ptr(&n) {};
		iterator(Node* p=nullptr) : ptr(p) {};
		iterator& operator++() { ptr = ptr->next; return *this;};
		iterator operator++(int a) {iterator retval = *this; ++*this; return retval; };
		std::string operator*() const {return ptr->data; };
		bool operator==(const iterator& rhs) const { return ptr == rhs.ptr; };
		bool operator!=(const iterator& rhs) const { return ptr != rhs.ptr; };
	};
	SList() { head = NULL; };
	void push_front(std::string);
	std::string pop_front();
	Node& front();
	iterator begin() const {return iterator(head);};
	iterator end() const;
	iterator remove(Iterator i);
private:
	Node *head;
};
#endif // !SLIST_H

