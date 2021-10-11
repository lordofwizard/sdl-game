SRC=src
SRCS := $(wildcard $(SRC)/*.c)
BINS := $(SRCS:%.c=%)


CC = gcc

COMPILER_FLAGS = -w $(shell sdl-config --cflags)

LINKER_FLAGS =   $(shell sdl-config --libs) -lSDL2_image

INCLUDE_FLAGS = -I include/ -I /usr/share/include/

OBJ_NAME = game

all: ${BINS}

%: %.o
        @echo "Checking .c files"
        $(CC) $(INCLUDE_FLAGS) $(COMPILER_FLAGS) $(LINKER_FLAGS) $< -o $@
%.o: %.c
        @echo "Making .o files"
        $(CC) $(INCLUDE_FLAGS) -c $<

clean:
	rm -rf *.o
