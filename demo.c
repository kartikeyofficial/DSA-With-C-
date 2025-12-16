#include <stdio.h>
#include <limits.h>


#define N 4
int cost[N][N] = {
    {0, 10, 15, 20},
    {10, 0, 35, 25},
    {15, 35, 0, 30},
    {20, 25, 30, 0}
};
int visited_cities[N];
int min_cost = INT_MAX;


void findMinCost(int current_city, int count, int current_cost) {
    
    if (count == N) {
        if (cost[current_city][0] != 0) {
            int total_cost = current_cost + cost[current_city][0];
            if (total_cost < min_cost) {
                min_cost = total_cost;
            }
        }
        return;
    }
    for (int next_city = 0; next_city < N; next_city++) {
        if (visited_cities[next_city] == 0 && cost[current_city][next_city] != 0) {
            
            visited_cities[next_city] = 1;
            findMinCost(next_city, count + 1, current_cost + cost[current_city][next_city]);
            visited_cities[next_city] = 0;
        }
    }
}

int main() {
    for (int i = 0; i < N; i++) {
        visited_cities[i] = 0;
    }
    int start_city = 0;
    visited_cities[start_city] = 1;
    findMinCost(start_city, 1, 0);

    printf("Minimum cost for the Travelling Salesman Tour: %d\n", min_cost);

    return 0;
}