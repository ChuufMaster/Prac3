#include "BFS.h"


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
	// TODO - implement BFS::next
	throw "Not yet implemented";
}
