run: programa.exe
	./programa.exe

programa.exe: programa.cpp biblioteca.o biblioteca.hpp
	g++ programa.cpp biblioteca.o -o programa.exe

biblioteca.o: biblioteca.cpp
	g++ -c biblioteca.cpp -o biblioteca.o