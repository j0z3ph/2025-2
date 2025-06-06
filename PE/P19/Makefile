APP=main.exe
MAIN=estructuras.c
TOOLS_OBJ=tools.o
TOOLS_H=tools.h
TOOLS=tools.c

run: $(APP)
	./$(APP)

$(APP): $(MAIN) $(TOOLS_H) $(TOOLS_OBJ) bibAgenda.o bibAgenda.h
	gcc $(MAIN) $(TOOLS_OBJ) bibAgenda.o -o $(APP)

$(TOOLS_OBJ): $(TOOLS)
	gcc -c $(TOOLS) -o $(TOOLS_OBJ)

bibAgenda.o: bibAgenda.c bibAgenda.h
	gcc -c bibAgenda.c -o bibAgenda.o