# Project: Ergasia_1
# Makefile created by Dev-C++ 5.11

CPP      = g++.exe
CC       = gcc.exe
WINDRES  = windres.exe
OBJ      = main.o
LINKOBJ  = main.o
LIBS     = -L"C:/Program Files/Dev-Cpp/MinGW64/lib32" -L"C:/Program Files/Dev-Cpp/MinGW64/x86_64-w64-mingw32/lib32" -static-libgcc -m32 -pg
INCS     = -I"C:/Program Files/Dev-Cpp/MinGW64/include" -I"C:/Program Files/Dev-Cpp/MinGW64/x86_64-w64-mingw32/include" -I"C:/Program Files/Dev-Cpp/MinGW64/lib/gcc/x86_64-w64-mingw32/4.9.2/include"
CXXINCS  = -I"C:/Program Files/Dev-Cpp/MinGW64/include" -I"C:/Program Files/Dev-Cpp/MinGW64/x86_64-w64-mingw32/include" -I"C:/Program Files/Dev-Cpp/MinGW64/lib/gcc/x86_64-w64-mingw32/4.9.2/include" -I"C:/Program Files/Dev-Cpp/MinGW64/lib/gcc/x86_64-w64-mingw32/4.9.2/include/c++"
BIN      = Ergasia_1.exe
CXXFLAGS = $(CXXINCS) -m32 -pg
CFLAGS   = $(INCS) -m32 -pg
RM       = rm.exe -f

.PHONY: all all-before all-after clean clean-custom

all: all-before $(BIN) all-after

clean: clean-custom
	${RM} $(OBJ) $(BIN)

$(BIN): $(OBJ)
	$(CC) $(LINKOBJ) -o $(BIN) $(LIBS)

main.o: main.c
	$(CC) -c main.c -o main.o $(CFLAGS)
