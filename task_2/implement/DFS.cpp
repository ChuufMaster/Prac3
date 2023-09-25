#include "DFS.h"
#include "Tile.h"
#include "Trap.h"

/* DFS_Maze(entity, current_node, maze):
    if current_node contains the desired item:
        Return "Item found"

    Explore adjacent unvisited nodes:
    for each valid neighbor of current_node:
        if neighbor is not visited:
            Mark neighbor as visited
            result = DFS_Maze(entity, neighbor, maze)  // Recursively explore
            if result is "Item found":
                Return "Item found"

    Return "Item not found"
 */

Tile* DFS::next() {
	if(this->current->getTrap()->toString() == "H"){
		return this->current;
	}

	if(this->current->down != NULL && this->wasVisited(this->current->down)){
		this->visited.push(this->current->down);
	}

	if(this->current->top != NULL && this->wasVisited(this->current->top)){
		this->visited.push(this->current->top);
	}
	if(this->current->left != NULL && this->wasVisited(this->current->left)){
		this->visited.push(this->current->left);
	}
	if(this->current->right != NULL && this->wasVisited(this->current->right)){
		this->visited.push(this->current->right);
	}
}
