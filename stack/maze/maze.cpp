#include <iostream>
#include "stack.h"

typedef struct {
	int x;
	int y;
}pos_t;

typedef struct {
	int ord; // order in road
	pos_t pos; // the block location
	int di; // 
}stack_element_t;

int main()
{
	stack<stack_element_t> s;

	return 0;
}