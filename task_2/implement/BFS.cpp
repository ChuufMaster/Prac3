#include "BFS.h"
#include "Tile.h"
#include "Trap.h"

/* BFS_Maze(entity, maze):
	Initialize an empty queue
	Mark the starting node as visited and enqueue it into the queue

	while the queue is not empty:
		Dequeue a node from the queue and call it current_node

		if current_node contains the desired item:
			Return "Item found"

		Explore adjacent unvisited nodes:
		for each valid neighbor of current_node:
			if neighbor is not visited:
				Mark neighbor as visited
				Enqueue neighbor into the queue

	Return "Item not found" (if item not found)
 */
Tile* BFS::next() {
	if (this->current->getTrap()->toString() == "H") {
		return nullptr;
	}

	this->current->color = "\033[0m";

	if (this->current->left != NULL && this->wasVisited(this->current->left)) {
		this->visited.push(this->current->left);
		this->current = this->current->left;
	}
	else if (this->current->top != NULL && this->wasVisited(this->current->top)) {
		this->visited.push(this->current->top);
		this->current = this->current->top;
	}
	else if (this->current->right != NULL && this->wasVisited(this->current->right)) {
		this->visited.push(this->current->right);
		this->current = this->current->right;
	}
	else if (this->current->down != NULL && this->wasVisited(this->current->down)) {
		this->visited.push(this->current->down);
		this->current = this->current->down;
	}
	else {
		queue<Tile*> empty;
		swap(this->visited, empty);
		return this->next();
	}

	this->current->color = "\033[35m";
	return this->current;

}
