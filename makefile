Parse.o: Parse.cpp
	gcc Parse.cpp -std=gnu++11 -o Parse.o

clean:
	rm -f Parse.o
