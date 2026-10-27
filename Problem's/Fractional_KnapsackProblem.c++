#include <bits/stdc++.h>
using namespace std;

double fractionalKnapsack(vector<int>& wt,
                          vector<int>& profit,
                          int capacity) {
    int n = wt.size();

    vector<pair<double, int>> items;

    for (int i = 0; i < n; i++) {
        double ratio = (double)profit[i] / wt[i];
        items.push_back({ratio, i});
    }

    sort(items.rbegin(), items.rend());

    double totalProfit = 0;

    for (auto item : items) {
        int i = item.second;

        if (capacity == 0)
            break;

        if (wt[i] <= capacity) {
            totalProfit += profit[i];
            capacity -= wt[i];
        } else {
            totalProfit += item.first * capacity;
            capacity = 0;
        }
    }

    return totalProfit;
}

int main() {
    vector<int> wt = {10, 20, 30};
    vector<int> profit = {60, 100, 120};

    cout << fractionalKnapsack(wt, profit, 50);

    return 0;
}