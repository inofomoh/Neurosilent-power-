CXX = g++
CXXFLAGS = -IEngine -IGames -std=c++17
SRC = main.cpp
OUT = NeuroForge

all:
	$(CXX) $(CXXFLAGS) $(SRC) -o $(OUT)

run: all
	./$(OUT)

clean:
	rm -f $(OUT)
