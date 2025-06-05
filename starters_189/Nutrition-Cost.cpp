#include <bits/stdc++.h>
using namespace std;

int main() {
    int t; cin >> t;
    while (t--) {
        int n, c;
        cin >> n >> c;
        vector<int> A(n), B(n);
        for (int i = 0; i < n; ++i) cin >> A[i];
        for (int i = 0; i < n; ++i) cin >> B[i];

       
        unordered_map<int, int> minCost;
        for (int i = 0; i < n; ++i) {
            int vitamin = A[i];
            int cost = B[i];
            if (minCost.find(vitamin) == minCost.end()) {
                minCost[vitamin] = cost;
            } else {
                minCost[vitamin] = min(minCost[vitamin], cost);
            }
        }


        vector<int> costs;
        for (auto& p : minCost) {
            costs.push_back(p.second);
        }


        sort(costs.begin(), costs.end());
        int sum = 0, maxValue = 0;
        for (int i = 0; i < costs.size(); ++i) {
            sum += costs[i]; 
            int value = c * (i + 1) - sum;
            maxValue = max(maxValue, value);
        }

        cout << maxValue << endl;
    }
    return 0;
}
