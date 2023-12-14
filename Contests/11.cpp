//Number of Operations to make network connected

#include <iostream>                                                                                                                                   #include <iostream>
#include <vector>

class UnionFindAns {
public:
    std::vector<int> parent, rank;

    UnionFindAns(int n) : parent(n), rank(n, 1) {
        for (int i = 0; i < n; ++i) {
            parent[i] = i;
        }
    }

    int find(int x) {
        if (parent[x] != x) {
            parent[x] = find(parent[x]);
        }
        return parent[x];
    }

    void unite(int x, int y) {
        int rootX = find(x);
        int rootY = find(y);

        if (rootX != rootY) {
            if (rank[rootX] > rank[rootY]) {
                parent[rootY] = rootX;
            } else if (rank[rootX] < rank[rootY]) {
                parent[rootX] = rootY;
            } else {
                parent[rootY] = rootX;
                rank[rootX]++;
            }
        }
    }
};

int minOperationsForConnectivity(int N, std::vector<std::pair<int, int>>& routes) {
    UnionFindAns uf(N + 1);  // +1 because cities are labeled from 1 to N

    int components = N;
    for (const auto& route : routes) {
        int city1 = route.first;
        int city2 = route.second;

        if (uf.find(city1) != uf.find(city2)) {
            uf.unite(city1, city2);
            components--;
        }
    }

    // If there is only one connected component, all cities are already connected.
    if (components == 1) {
        return 0;
    }

    // If there are multiple components, we need to add edges to connect them.
    // The number of operations needed is equal to the number of components minus 1.
    return (components - 1);
}

int main() {
    int N;
    //Enter the number of cities
    std::cin >> N;

    //Enter the number of routes
    int numRoutes;
    std::cin >> numRoutes;

    std::vector<std::pair<int, int>> routes;
   
    for (int i = 0; i < numRoutes; ++i) {
        int city1, city2;
        std::cin >> city1 >> city2;
        routes.emplace_back(city1, city2);
    }

    int result = minOperationsForConnectivity(N, routes);

    std::cout << result << std::endl;

    return 0;
}
              