EXE_NAME=p.exe

run: $(EXE_NAME)
	./$(EXE_NAME)

$(EXE_NAME): main.c LaBiblioteca.o LaBiblioteca.h
	gcc main.c LaBiblioteca.o -o $(EXE_NAME)

LaBiblioteca.o: LaBiblioteca.c
	gcc -c LaBiblioteca.c -o LaBiblioteca.o