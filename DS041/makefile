CC = g++
CFLAGS = -Wall -std=c++11
SRC = main.cpp MyLinkedStack.cpp
OBJ = $(SRC:.cpp=.o)
EXEC = stack

all: $(EXEC)

$(EXEC): $(OBJ)
	$(CC) $(CFLAGS) -o $@ $^

%.o: %.cpp
	$(CC) $(CFLAGS) -c $<

clean:
	rm -f $(OBJ) $(EXEC)
