#include "graph.h"
#include "graph_processing.h"

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

	printEdgeMatrix(g);

	return 0;
}
