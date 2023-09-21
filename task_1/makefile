CXX = g++
CXXFLAGS = -std=c++17 -Wall
SRC_FILES = main.cpp Contract.cpp State.cpp Negotiation.cpp Tentatively_accepted.cpp Rejected.cpp Accepted.cpp Completed.cpp
EXECUTABLE = main

$(EXECUTABLE): $(SRC_FILES)
	$(CXX) $(CXXFLAGS) -o $(EXECUTABLE) $(SRC_FILES)

clean:
	rm -f $(EXECUTABLE)