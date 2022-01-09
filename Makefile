#Makefile
objects = main.o node.o

.PHONY: all
all: bind

bind: ${objects}
	gcc -o bind ${objects} -lstdc++

main.o: node.h
node.o: node.h

.PHONY: clean
clean:
	-rm -f bind *.o 2>/dev/null
