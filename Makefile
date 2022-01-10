#Makefile
objects = main.o graph.o graph_processing.o node.o randomEdge.o

.PHONY: all
all: bind

bind: ${objects}
	gcc -o bind ${objects} -lstdc++

main.o: graph.h graph_processing.h
graph.o: graph.h node.h randomEdge.h
graph_processing.o: graph_processing.h graph.h node.h
node.o: node.h
randomEdge.o: randomEdge.h

.PHONY: clean
clean:
	-rm -f bind *.o 2>/dev/null
