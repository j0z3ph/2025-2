run: programa.exe
	./programa.exe


programa.exe: funciones.c biblioteca.o biblioteca.h
	gcc funciones.c biblioteca.o -o programa.exe


biblioteca.o: biblioteca.c
	gcc -c biblioteca.c -o biblioteca.o