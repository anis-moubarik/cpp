#include <iostream>
#include "IntStack.h"


IntStack::IntStack(size_t sz)
	: size_(sz), top_(0), array_(new int[sz]){
}

void IntStack::push(int i)
{
	if(top_ == size_) throw std::logic_error("stack overflow");
	array_[top_++] = i;
}

IntStack::IntStack(IntStack const& stack)
	: size_(stack.size_), top_(stack.top_), array_(new int[size_]){
		for(size_t i = 0; i < top_; i++){
			array_[i] = stack.array_[i];
		}
}

IntStack::~IntStack ()
{
	delete [] array_;
}

int IntStack::pop()
{
	if(0 == size_) throw std::logic_error("stack underflow");
	int n = array_[top_-1];
	array_[top_-1] = NULL;
	top_ = top_-1;
	return n;

}