CC = g++
SRC = main.cpp MyLinkedStack.cpp
OBJ = $(SRC:.cpp=.o)
EXEC = calculator

$(EXEC): $(OBJ)
	$(CC) -o $@ $^

%.o: %.cpp %.h
	$(CC) -c $<

clean:
	rm -f $(OBJ) $(EXEC)
