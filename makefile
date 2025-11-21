SRC = main.c randomColor.c
OBJ = $(SRC:.c=.o)
TARGET = run.exe

all: $(TARGET)

$(TARGET): $(OBJ)
	gcc -o $(TARGET) $(OBJ)

run: $(TARGET)
	./$(TARGET)

clean:
	rm -f $(OBJ) $(TARGET)
