# Set the compiler and flags
CXX = g++
CXXFLAGS = -Wall -g

OBJ_DIR = obj
BIN_DIR = bin
SRC_DIR = src

# Target executable name
TARGET = $(BIN_DIR)/app
OBJS = $(OBJ_DIR)/main.o #$(OBJ_DIR)/set.o

# Build the final executable
all: $(TARGET)

$(TARGET): $(OBJS)
	$(CXX) $(CXXFLAGS) $(OBJS) -o $@

# Compile source files into object files
$(OBJ_DIR)/%.o: $(SRC_DIR)/%.cpp
	$(CXX) $(CXXFLAGS) -c $< -o $@

# Clean up generated files
clean:
	rm -f *.o $(OBJ_DIR)/*.o $(BIN_DIR)/app		

