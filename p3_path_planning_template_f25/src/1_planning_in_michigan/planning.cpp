#include <queue>
#include <stack>
#include <vector>
#include <string>
#include <fstream>
#include <iostream>
#include <algorithm>

#include "planning.h"



void printPath(std::vector<int>& path, Graph& g) {

    if (path.size() < 1)
    {
        std::cout << "No path found :(\n";
        return;
    }

    std::cout << "Path: ";
    for (int i = 0; i < path.size() - 1; i++)
    {
        std::cout << g.data[path[i]] << " -> ";
    }
    std::cout <<  g.data[path.back()] << "\n";
};

std::vector<int> tracePath(int n, Graph& g) {
    std::vector<int> path;
    int curr = n;
    do {
        path.push_back(curr);
        curr = getParent(curr, g);
    } while (curr != -1);

    // Since we built the path backwards, we need to reverse it.
    std::reverse(path.begin(), path.end());
    return path;
};

// *** Task: Implement this function *** //
std::vector<int> getNeighbors(int n, Graph& g)
{
    // BEGIN STUDENT CODE
    // END STUDENT CODE

    //replace this with your code
    return {0,0,0};
}

// *** Task: Implement this function *** //
std::vector<float> getEdgeCosts(int n, Graph& g)
{
    // BEGIN STUDENT CODE
    // END STUDENT CODE

    //replace this with your code
    return {0,0,0,0};
}

int getParent(int n, Graph& g)
{
    int idx = g.nodes[n].parent_idx      
    
    return idx;
}

void initGraph(Graph& g)
{
    g.nodes.clear();
    for (int i = 0; i < g.data.size(); i++)
    {
        Node n;
        n.city = g.data[i];
        g.nodes.push_back(n);
    }
}

// *** Task: Implement this function *** //

/**
 * Searches for a path from a starting node to a goal node on a graph using breadth first search.
 * @param  start The index of the starting node.
 * @param  goal The index of the goal node.
 * @param  g The associated graph.
 * @return  A list of indicies of nodes that form a path from the starting node to the goal node.
 */

std::vector<int> bfs(int start, int goal, Graph& g)
{
    initGraph(g);
    std::vector<int> path;

    std::queue<int> visit_queue;
    for (int i == 0; i<visit_queue.size(); ++i) {
        g.nodes[i].dist_to_parent = 10e6;
    }
    Node current;
    visit_queue.push(g.nodes[start]);
    g.nodes[start].dist_to_parent = 0;

    std::vector<std::vector<int>> neighbors;
    std::vector<std::vector<int>> costs;
    while (visit_queue.size() > 0 && visit_queue.back() != goal){
        current.push(visit_queue.front());
        visit_queue.pop();
        current.visited = true;
        if (current == goal) { // how to make current an int
            tracePath(current, g);
            break;
        }
        neighbors = getNeighbors(current, g);
        costs = getEdgeCosts(current, g);
        for (int i==0; i<neighbors.size(); ++i) {
            if (neighbors[i].visited == false) { // neighbors is an int vector??
                visit_queue.push_back(neighbors[i]);
            }
            if (neighbors[i].distance > current.dist_to_parent + )
        }
        
        //find the neighbors
        //push the neighbors into visit queue
        //If distance neighbor> distance to current node + cost
            // then update path

    }

    return path;
}

// *** Task: Implement this function if completing the advanced extension *** //
std::vector<int> dfs(int start, int goal, Graph& g)
{
    initGraph(g);
    std::vector<int> path;

    std::stack<int> visit_stack;

    // BEGIN STUDENT CODE
    // END STUDENT CODE
    return path;
}
