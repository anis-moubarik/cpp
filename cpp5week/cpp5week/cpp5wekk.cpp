#include <iostream>
#include "SList.h"

int main()
{
	SList ll = SList();

	ll.push_front("moro");
	ll.push_front("eka");
	std::string asd = ll.pop_front();
	return 0;
}