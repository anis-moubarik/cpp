#include <iostream>
#include <assert.h>
#include "IntStack.h"


IntStack::IntStack(size_t sz)
	: size_(sz), top_(0), array_(new int[sz]){
}

void IntStack::push(int i)
{
	if(top_ == size_) throw std::logic_error("stack overflow");
	array_[top_++] = i;
	check();
}

IntStack::IntStack(IntStack const& stack)
	: size_(stack.size_), top_(stack.top_), array_(new int[size_]){
		for(size_t i = 0; i < top_; i++){
			array_[i] = stack.array_[i];
		}
		check();
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
	check();
	return n;

}

IntStack& IntStack::operator=(IntStack const& is){
	std::copy(is.array_, is.array_+is.size_, array_);
	size_ = is.size_;
	top_ = is.top_;
	check();
	return *this;
}

void IntStack::check(){
	assert(0 <= size_ && size_ <= INT_MAX);
	assert(top_ <= size_);
}