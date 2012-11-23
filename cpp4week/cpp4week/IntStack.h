#ifndef INTSTACK_H
#define INSTACK_H
class IntStack{
public:
	explicit IntStack (size_t sz = 90);
	void push(int);
	int pop();
	IntStack(IntStack const&);
	IntStack& operator =(IntStack const&);
	~IntStack();
private:
	size_t size_;
	size_t top_;
	int * array_;
	void check();
};
#endif