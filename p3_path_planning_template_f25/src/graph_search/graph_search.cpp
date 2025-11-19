#include <iostream>
#include <cmath>
#include <queue>
#include <functional>

#include <path_planning/utils/math_helpers.h>
#include <path_planning/utils/graph_utils.h>

#include <path_planning/graph_search/graph_search.h>

/**
 * General graph search instructions:
 *
 * First, define the correct data type to keep track of your visited cells
 * and add the start cell to it. If you need to initialize any properties
 * of the start cell, do that too.
 *
 * Next, implement the graph search function. Save the result in the path
 * variable defined for you.
 *
 * To visualize which cells are visited in the navigation webapp, save each
 * visited cell in the vector in the graph struct as follows:
 *      graph.visited_cells.push_back(c);
 * where c is a Cell struct corresponding to the visited cell you want to
 * visualize.
 *
 * The tracePath() function will return a path (which you should assign to
 * the path variable above) given the goal index, if you have kept track
 * of the parent of each node correctly and have implemented the
 * getParent() function. If you do not find a path, return an empty path
 * vector.
*/

// *** Task: Implement this function if completing the advanced extensions *** //
std::vector<Cell> depthFirstSearch(GridGraph &graph, const Cell &start, const Cell &goal)
{
    std::vector<Cell> path; // The final path should be placed here.

    initGraph(graph); // Make sure all the node values are reset.

    int start_idx = cellToIdx(start.i, start.j, graph);

    /* BEGIN STUDENT CODE. */
    /* END STUDENT CODE. */

    return path;
}

std::vector<Cell> breadthFirstSearch(GridGraph &graph, const Cell &start, const Cell &goal)
{
    std::vector<Cell> path; // The final path should be placed here.
    std::queue<int> visit_queue;
    std::vector<int> neighbors;  
    
    initGraph(graph); // Make sure all the node values are reset.

    for (int i = 0; i < graph.cell_nodes.size(); ++i) {
        graph.cell_nodes[i].dist_to_parent = 10e6;
    }
    
    int start_idx = cellToIdx(start.i, start.j, graph);
    int goal_idx = cellToIdx(goal.i, goal.j, graph);
    int current_idx;

    visit_queue.push(start_idx);

    graph.cell_nodes[start_idx].dist_to_parent = 0;
    
    while(visit_queue.size() > 0) {
        current_idx = visit_queue.front();
        visit_queue.pop();
        graph.cell_nodes[current_idx].visited = true; 
        
        if (current_idx == goal_idx) { 
            path = tracePath(goal_idx, graph);
            break;
        }
        neighbors = findNeighbors(current_idx, graph);
      
        // costs = getEdgeCosts(current, g); // manually calculate
        //int costs = std::sqrt(std::pow((graph.cell_nodes[neighbors[i]].i - graph.cell_nodes[current_idx].i),2) + std::pow((graph.cell_nodes[neighbors[i]].j - graph.cell_nodes[current_idx].j),2));
       
       
        for (int i = 0; i < neighbors.size(); ++i) {
            if (graph.cell_nodes[neighbors[i]].visited == false) { 
                visit_queue.push(neighbors[i]);
            }   
            if (graph.cell_nodes[neighbors[i]].dist_to_parent > graph.cell_nodes[current_idx].dist_to_parent + std::sqrt(std::pow((graph.cell_nodes[neighbors[i]].i - graph.cell_nodes[current_idx].i),2) + std::pow((graph.cell_nodes[neighbors[i]].j - graph.cell_nodes[current_idx].j),2))) {
                graph.cell_nodes[neighbors[i]].parent_idx = current_idx;
                graph.cell_nodes[neighbors[i]].dist_to_parent = graph.cell_nodes[current_idx].dist_to_parent + std::sqrt(std::pow((graph.cell_nodes[neighbors[i]].i - graph.cell_nodes[current_idx].i),2) + std::pow((graph.cell_nodes[neighbors[i]].j - graph.cell_nodes[current_idx].j),2));
            } 
        }
    }
    return path;
    
    
    // pasted from prev code
    // print parents, current, costs and debug
    // initGraph(g);
    // std::vector<int> path;
    /*
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
    */
    // return path;
}




// *** Task: Implement this function if completing the advanced extensions *** //
std::vector<Cell> iterativeDeepeningSearch(GridGraph &graph, const Cell &start, const Cell &goal)
{
    std::vector<Cell> path; // The final path should be placed here.

    initGraph(graph); // Make sure all the node values are reset.

    int start_idx = cellToIdx(start.i, start.j, graph);

    /* BEGIN STUDENT CODE. */
    /* END STUDENT CODE. */

    return path;
}

// *** Task: Implement this function if completing the advanced extensions *** //
std::vector<Cell> aStarSearch(GridGraph &graph, const Cell &start, const Cell &goal)
{
    std::vector<Cell> path; // The final path should be placed here.

    initGraph(graph); // Make sure all the node values are reset.

    int start_idx = cellToIdx(start.i, start.j, graph);

    /* BEGIN STUDENT CODE. */
    /* END STUDENT CODE. */

    return path;
}
