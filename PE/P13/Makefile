run: prog.exe
	./prog.exe

prog.exe: programita.c biblioteca.h biblioteca.o
	gcc programita.c biblioteca.o -o prog.exe

biblioteca.o: biblioteca.c
	gcc -c biblioteca.c -o biblioteca.o