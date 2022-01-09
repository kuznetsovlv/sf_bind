#Makefile
objects = main.o graph.o node.o randomEdge.o

.PHONY: all
all: bind

bind: ${objects}
	gcc -o bind ${objects} -lstdc++

main.o: node.h graph.h randomEdge.h
graph.o: graph.h node.h randomEdge.h
node.o: node.h
randomEdge.o: randomEdge.h

.PHONY: clean
clean:
	-rm -f bind *.o 2>/dev/null
