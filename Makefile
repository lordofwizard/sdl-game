TARGET = game


SRC = src
INC = include 
BIN = bin
SYSINC = /usr/share/include/
SOURCE = $(wildcard $(SRC)/*.c)
OBJECT = $(patsubst %,$(BIN)/%,$(notdir $(SOURCE:.c=.o)))
CC = gcc

CFLAGS = -Wall -I$(INC) -I$(SYSINC) -w $(shell sdl-config --cflags) -lSDL2 -lSDL2main -I/usr/include/SDL2 -D_REENTRANT

$(BIN)/$(TARGET): $(OBJECT)
	@echo "COMPILING"
	$(CC) $(CFLAGS) -o $@ $^

$(BIN)/%.o : $(SRC)/%.c
	@echo "LINKING"
	$(CC) $(CFLAGS) -c $< -o $@

help :
	@echo "sources :$(SOURCE)"
	@echo "objects :$(OBJECT)"
.PHONY : help



