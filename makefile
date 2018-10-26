# Makefile for Laboratório 1
# Created by Carlos Vinícius 20/09/2018
# Makefile para executar o segundo exercício do laboratório 1

CC = g++
CPPFLAGS = -Wall -pedantic -std=c++11 -I$(INC)
SRC = ./src
INC = ./include
BIN = ./bin
OBJ = ./build

PROG = $(BIN)/teste
OBJS = $(OBJ)/carro.o $(OBJ)/main.o 

all:mkdirs $(PROG)

$(PROG): $(OBJS)
	$(CC) $(CPPFLAGS) -o $(PROG) $(OBJS)

$(OBJ)/carro.o: $(INC)/carro.h $(SRC)/carro.cpp 
	$(CC) $(CPPFLAGS) -c $(SRC)/carro.cpp -o $(OBJ)/carro.o

$(OBJ)/main.o: $(INC)/carro.h   $(SRC)/main.cpp
	$(CC) $(CPPFLAGS) -c $(SRC)/main.cpp -o $(OBJ)/main.o

mkdirs: 
	mkdir -p $(BIN)
	mkdir -p $(OBJ)

run:
	$(BIN)/teste

clean: 
	rm -f $(BIN)/*
	rm -f $(OBJ)/*
	