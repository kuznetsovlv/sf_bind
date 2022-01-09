#include <iostream>
#include "graph.h"
#include "randomEdge.h"

int main()
{
	for(int i = 0; i < 10; ++i)
	{
		std::cout << randomEdge() << std::endl;
	}

	return 0;
}
