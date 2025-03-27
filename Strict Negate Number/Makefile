CXX = g++
CXXFLAGS = -std=c++23 -isystem benchmark/include -pthread

LDFLAGS = -Lbenchmark/build/src -lbenchmark

TARGET = mybenchmark

SRC = main.cc

# Build rule
$(TARGET): $(SRC)
	@$(CXX) $(CXXFLAGS) $(SRC) $(LDFLAGS) -o $(TARGET)

# Run rule
run: $(TARGET)
	@./$(TARGET)

# Clean rule
clean:
	@rm -f $(TARGET)

# All rule
all: clean $(TARGET) run