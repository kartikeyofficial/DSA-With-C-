#include <stdio.h>
#include <limits.h>

// Define the number of cities
#define N 4

// The cost/distance matrix (Adjacency Matrix)
// cost[i][j] is the distance from city i to city j
// 0 indicates the start/end point, or distance from a city to itself
int cost[N][N] = {
    {0, 10, 15, 20},
    {10, 0, 35, 25},
    {15, 35, 0, 30},
    {20, 25, 30, 0}
};

// Array to keep track of visited cities
int visited_cities[N];

// Global variable to store the minimum cost found so far
int min_cost = INT_MAX;

/**
 * @brief Recursive function to find the minimum cost tour.
 * * @param current_city The city currently being visited.
 * @param count The number of cities visited so far.
 * @param current_cost The cost of the path accumulated so far.
 */
void findMinCost(int current_city, int count, int current_cost) {
    // Base case: All N cities have been visited
    if (count == N) {
        // Check if a path exists back to the starting city (city 0)
        if (cost[current_city][0] != 0) {
            // Complete the tour and update min_cost if the new total cost is lower
            int total_cost = current_cost + cost[current_city][0];
            if (total_cost < min_cost) {
                min_cost = total_cost;
            }
        }
        return;
    }

    // Try to move to all unvisited cities
    for (int next_city = 0; next_city < N; next_city++) {
        // Check if the city is unvisited AND there is a path to it
        if (visited_cities[next_city] == 0 && cost[current_city][next_city] != 0) {
            
            // 1. Mark the next city as visited
            visited_cities[next_city] = 1;
            
            // 2. Recursively call the function for the next city
            findMinCost(next_city, count + 1, current_cost + cost[current_city][next_city]);
            
            // 3. Backtrack: Mark the city as unvisited to explore other paths
            // This is the core of the backtracking approach.
            visited_cities[next_city] = 0;
        }
    }
}

int main() {
    // Initialize the visited array to all 0 (unvisited)
    for (int i = 0; i < N; i++) {
        visited_cities[i] = 0;
    }

    // Start the tour from city 0
    int start_city = 0;
    
    // Mark the starting city as visited
    visited_cities[start_city] = 1;

    // Start the recursive search: (Current City, Count of visited cities, Accumulated cost)
    // Start city is 0, 1 city is visited, cost is 0.
    findMinCost(start_city, 1, 0);

    printf("Minimum cost for the Travelling Salesman Tour: %d\n", min_cost);

    return 0;
}