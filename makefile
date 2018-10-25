#This makefile will be the script for my New comp project
 
main: main.cpp
	g++ main.cpp -larmadillo -o main

run:
	./main

edit:
	vim main.cpp

clean:
	rm main

debug:
	gdb ./main








