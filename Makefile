#Makefile
objects = main.o

.PHONY: all
all: bind

bind: ${objects}
	gcc -o bind ${objects} -lstdc++

main.o:

.PHONY: clean
clean:
	-rm -f bind *.o 2>/dev/null
