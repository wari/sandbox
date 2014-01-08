all: stacks firstsecond

firstsecond: main.cpp
	g++ -o firstsecond main.cpp

stacks: stacks.o stack.o stdafx.o
	g++ -o stacks stacks.o stack.o stdafx.o

stacks.o: stack.o stdafx.o stacks.cpp
	g++ -c stacks.cpp -I./include

stack.o: stdafx.o stack.cpp
	g++ -c stack.cpp -I./include

stdafx.o: stdafx.cpp
	g++ -c stdafx.cpp -I./include

clean:
	rm -f *.o *.orig stacks firstsecond
