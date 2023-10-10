#include "Iterator.h"
#include "Tile.h"

bool Iterator::wasVisited(Tile* _t){
    std::queue<Tile*> tempQueue = this->visited; // Create a copy of the original queue

    while (!tempQueue.empty()) {
        if (tempQueue.front() == _t) {
            return true; // Node found in the queue
        }
        tempQueue.pop(); // Remove the front element
    }

    return false; // Node not found in the queue
}

void Iterator::setTile(Tile* tile){
	this->current = this->current == nullptr ? tile : this->current; 
    this->current->color = "\033[35m";
}