Parse.o: Parse.cpp
	g++ Parse.cpp -o Parse.o

clean:
	rm -f Parse.o
