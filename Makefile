all: BottleApp

BottleApp: Bottle.o MyClassApp.o Bottle_test.o
	g++ Bottle.o MyClassApp.o Bottle_test.o -o BottleApp

Bottle_test.o: Bottle_test.cpp
	g++ -c Bottle_test.cpp

MyClassApp.o: MyClassApp.cpp
	g++ -c MyClassApp.cpp

Bottle.o: Bottle.cpp
	g++ -c Bottle.cpp

clean:
	rm *o BottleApp

