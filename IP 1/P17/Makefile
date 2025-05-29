run: arreglos.exe
	./arreglos.exe

arreglos.exe: arreglos.c bib.o ./Bibliotecas/bib.h
	gcc arreglos.c bib.o -o arreglos.exe

bib.o: ./Bibliotecas/bib.c
	gcc -c ./Bibliotecas/bib.c -o bib.o