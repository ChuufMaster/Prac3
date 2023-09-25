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
		this->current = this->current->down;
	}

	if(this->current->right != NULL && this->wasVisited(this->current->right)){
		this->visited.push(this->current->right);
		this->current = this->current->right;
	}

	if(this->current->top != NULL && this->wasVisited(this->current->top)){
		this->visited.push(this->current->top);
		this->current = this->current->top;
	}
	if(this->current->left != NULL && this->wasVisited(this->current->left)){
		this->visited.push(this->current->left);
		this->current = this->current->left;
	}

	return NULL;
}
