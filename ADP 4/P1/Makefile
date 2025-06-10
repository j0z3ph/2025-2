run: prog.exe
	./prog.exe

prog.exe: programa.cpp stdraul.hpp stdraul.o
	g++ programa.cpp stdraul.o -o prog.exe

stdraul.o: stdraul.cpp
	g++ -c stdraul.cpp -o stdraul.o