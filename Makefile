all: BottleApp

BottleApp: Bottle.o MyClassApp.o
	g++ Bottle.o MyClassApp.o -o BottleApp

MyClassApp.o: MyClassApp.cpp
	g++ -c MyClassApp.cpp

Bottle.o: Bottle.cpp
	g++ -c Bottle.cpp

clean:
	rm *o BottleApp

