#include <iostream>
#include <vector>
#include <cstddef>
#include "graph.h"
#include "graph_processing.h"
#include "printPairs.h"

int main()
{

	Graph g;

	g.add("Иван");
	g.add("Сергей");
	g.add("John");
	g.add("Инна");
	g.add("Ольга");
	g.add("Юлия");
	g.add("Дмитрий");
	g.add("Наталья");
	g.add("Надежда");
	g.add("Дарья");
	g.add("Людмила");
	g.add("Кирил");
	g.add("Михаил");
	g.add("Максим");

	//Uncomment to show edge and distance matrixes
	//printMatrixes(g);
	//std::cout << std::endl;

	printPairs(3, g);
	std::cout << std::endl;

	return 0;
}
