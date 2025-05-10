run: programa.exe
	./programa.exe

programa.exe: funcion.c biblioteca.o biblioteca.h
	gcc funcion.c biblioteca.o -o programa.exe

biblioteca.o: biblioteca.c
	gcc -c biblioteca.c -o biblioteca.o

clean: 
	del biblioteca.o programa.exe