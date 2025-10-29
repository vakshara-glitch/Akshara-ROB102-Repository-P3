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

// *** Task: Implement this function *** //
int getParent(int n, Graph& g)
{
    // BEGIN STUDENT CODE
    // END STUDENT CODE

    //replace this with your code
    return -1;
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
std::vector<int> bfs(int start, int goal, Graph& g)
{
    initGraph(g);
    std::vector<int> path;

    std::queue<int> visit_queue;

    // BEGIN STUDENT CODE
    // END STUDENT CODE
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
