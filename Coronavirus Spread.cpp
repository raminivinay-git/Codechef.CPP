#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> x(n);
        for (int i = 0; i < n; i++) {
            cin >> x[i];
        }
        
        int min_infected = n;
        int max_infected = 1;
        int current_infected = 1;
        
        for (int i = 1; i < n; i++) {
            if (x[i] - x[i - 1] <= 2) {
                current_infected++;
            } else {
                min_infected = min(min_infected, current_infected);
                max_infected = max(max_infected, current_infected);
                current_infected = 1;
            }
        }
        
        min_infected = min(min_infected, current_infected);
        max_infected = max(max_infected, current_infected);
        
        cout << min_infected << " " << max_infected << "\n";
    }
    return 0;
}
