CXX = g++
CXXFLAGS = -std=c++17 -Wall -g
SRC_FILES = Engine.cpp Menu.cpp Research.cpp main.cpp Lair.cpp Hero.cpp Trap.cpp Tile.cpp Iterator.cpp Bank.cpp treasureHoard.cpp noTrap.cpp weakTrap.cpp teleportTrap.cpp nukeTrap.cpp BFS.cpp DFS.cpp Cleric.cpp Wizard.cpp
EXECUTABLE = main

$(EXECUTABLE): $(SRC_FILES)
	$(CXX) $(CXXFLAGS) -o $(EXECUTABLE) $(SRC_FILES)

clean:
	rm -f $(EXECUTABLE)