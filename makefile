Parse.o: Parse.cpp
	g++ Parse.cpp -o Parse.exe

clean:
	rm -f Parse.exe
