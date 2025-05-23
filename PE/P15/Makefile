VARIABLE=pro.exe

run: $(VARIABLE)
	./$(VARIABLE)

$(VARIABLE): programa.c ElMasGrandeBib.h biblioteca.o
	gcc programa.c biblioteca.o -o $(VARIABLE)

biblioteca.o: ElMasGrandeBib.c
	gcc -c ElMasGrandeBib.c -o biblioteca.o