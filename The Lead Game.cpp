#include <iostream>

using namespace std;

int main() {
    int n;
    cin >> n;
    
    int p1_cumulative = 0;
    int p2_cumulative = 0;
    int max_lead = 0;
    int winner = 0;
    
    for (int i = 0; i < n; ++i) {
        int s, t;
        cin >> s >> t;
        
        p1_cumulative += s;
        p2_cumulative += t;
        
        if (p1_cumulative > p2_cumulative) {
            int current_lead = p1_cumulative - p2_cumulative;
            if (current_lead > max_lead) {
                max_lead = current_lead;
                winner = 1;
            }
        } else {
            int current_lead = p2_cumulative - p1_cumulative;
            if (current_lead > max_lead) {
                max_lead = current_lead;
                winner = 2;
            }
        }
    }
    
    cout << winner << " " << max_lead << "\n";
    
    return 0;
}
