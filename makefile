# Nazwa końcowego programu
TARGET = bin/car

# Katalogi
SRC_DIR = src
INC_DIR = inc
BUILD_DIR = build

# Kompilator i opcje
CXX = g++
CXXFLAGS = -std=c++17 -Wall -I$(INC_DIR)

# Pliki źródłowe
SRCS = $(wildcard $(SRC_DIR)/*.cpp)

# Pliki obiektowe
OBJS = $(patsubst $(SRC_DIR)/%.cpp, $(BUILD_DIR)/%.o, $(SRCS))

# Reguła główna
all: $(TARGET)

# Tworzenie pliku wynikowego
$(TARGET): $(OBJS)
	@mkdir -p bin
	$(CXX) $(OBJS) -o $(TARGET)

# Kompilacja plików .cpp do .o
$(BUILD_DIR)/%.o: $(SRC_DIR)/%.cpp
	@mkdir -p $(BUILD_DIR)
	$(CXX) $(CXXFLAGS) -c $< -o $@

# Uruchomienie programu
run: all
	./$(TARGET)

# Czyszczenie
clean:
	rm -rf $(BUILD_DIR)/*.o $(TARGET)

.PHONY: all clean run
