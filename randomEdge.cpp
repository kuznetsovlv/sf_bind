#include <cstdlib>
#include <ctime>
#include "randomEdge.h"

unsigned randomEdge()
{
	static bool initiated = false;

	if(!initiated)
	{
		srand(time(nullptr));
		initiated = true;
	}

	return rand() % 2;
}
