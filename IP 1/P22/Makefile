COMPILER=gcc
SERIAL=serial.c
SERIAL_H=serial.h
SCONTROLLER=simplecontroller.c
SCONTROLLER_H=simplecontroller.h
PROG=servo.c
PROG_EXE=progr.exe

run: $(PROG_EXE)
	./$(PROG_EXE)

$(PROG_EXE): $(PROG) $(SERIAL_H) $(SERIAL) $(SCONTROLLER) $(SCONTROLLER_H)
	$(COMPILER) -o $(PROG_EXE) $(PROG) $(SERIAL) $(SCONTROLLER)

