all: stacks firstsecond

firstsecond: main.cpp
	g++ -g -o firstsecond main.cpp

stacks: stacks.o stack.o stdafx.o queue.o
	g++ -g -o stacks stacks.o stack.o stdafx.o queue.o

queue.o: stdafx.o queue.cpp include/queue.h
	g++ -g -c queue.cpp -I./include

stacks.o: stack.o stdafx.o stacks.cpp
	g++ -g -c stacks.cpp -I./include

stack.o: stdafx.o stack.cpp include/stack.h
	g++ -g -c stack.cpp -I./include

stdafx.o: stdafx.cpp include/stdafx.h
	g++ -g -c stdafx.cpp -I./include

clean:
	rm -f *.o *.orig stacks firstsecond
