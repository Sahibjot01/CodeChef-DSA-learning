#include <iostream>

#include <vector>

#include <algorithm>

using namespace std;

int main() {
        long long int budget, n, max_profit = -1;
        cin >> n;
        std::vector < long long int > customer;
        for (int i = 0; i < n; i++) {
                cin >> budget;
                customer.push_back(budget);
        }

        sort(customer.begin(), customer.end());

        for (int i = 0; i < n; i++) {
                if (customer[i] * (n - i) > max_profit) {
                        max_profit = customer[i] * (n - i);
                }
        }

        printf("%lld", max_profit);
        return 0;
}