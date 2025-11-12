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
    //std::cout << g.nodes[neighbors[i]].city << " ";
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
    //replace this with your code
    return g.edges[n];
}

// *** Task: Implement this function *** //
std::vector<float> getEdgeCosts(int n, Graph& g)
{
    std::vector<float> costs = g.edge_costs[n];

    //replace this with your code
    return costs;
}

int getParent(int n, Graph& g)
{
    // if (g.nodes[n].parent_idx) {
    return g.nodes[n].parent_idx;
    // }
    // else {
    //     return -1;
    // }
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
    //print parents, current, costs and debug
    initGraph(g);
    std::vector<int> path;

    std::queue<int> visit_queue;
    std::vector<int> neighbors;  
    std::vector<float> costs;

    for (int i = 0; i < g.nodes.size(); ++i) {
        g.nodes[i].dist_to_parent = 10e6;
    }

    int current; 

    visit_queue.push(start);

    g.nodes[start].dist_to_parent = 0;

    while (visit_queue.size() > 0) { 
        current = visit_queue.front();
        visit_queue.pop();
        g.nodes[current].visited = true;  

        if (current == goal) { 
            path = tracePath(current, g);
            break;
        }
        neighbors = getNeighbors(current, g);
        costs = getEdgeCosts(current, g);

        for (int i = 0; i < neighbors.size(); ++i) {
            if (g.nodes[neighbors[i]].visited == false) { 
                visit_queue.push(neighbors[i]);
            }   
            if (g.nodes[neighbors[i]].dist_to_parent > g.nodes[current].dist_to_parent + costs[i]) {
                g.nodes[neighbors[i]].parent_idx = current;
                g.nodes[neighbors[i]].dist_to_parent = g.nodes[current].dist_to_parent + costs[i];
            } 
        }
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
