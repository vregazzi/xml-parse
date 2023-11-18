Parse.o: Parse.cpp
	gcc Parse.cpp -lstdc++ -o Parse.o

clean:
	rm -f Parse.o
