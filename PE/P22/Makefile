COMPILER=gcc
SERIAL=serial.c
SERIAL_H=serial.h
SCONTROLLER=simplecontroller.c
SCONTROLLER_H=simplecontroller.h
PROG_EXE=prog.exe
PROG=servo.c

run: $(PROG_EXE)
	./$(PROG_EXE)

$(PROG_EXE): $(PROG) $(SERIAL_H) $(SERIAL) $(SCONTROLLER) $(SCONTROLLER_H)
	$(COMPILER) -o $(PROG_EXE) $(PROG) $(SERIAL) $(SCONTROLLER)

