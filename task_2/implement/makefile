CXX = g++
CXXFLAGS = -std=c++17 -Wall
SRC_FILES = main.cpp Lair.cpp Hero.cpp Trap.cpp Tile.cpp 
EXECUTABLE = main

$(EXECUTABLE): $(SRC_FILES)
	$(CXX) $(CXXFLAGS) -o $(EXECUTABLE) $(SRC_FILES)

clean:
	rm -f $(EXECUTABLE)