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

    initGraph(graph); // Make sure all the node values are reset.

    int start_idx = cellToIdx(start.i, start.j, graph);

    /* BEGIN STUDENT CODE. */
    /* END STUDENT CODE. */

    return path;
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
